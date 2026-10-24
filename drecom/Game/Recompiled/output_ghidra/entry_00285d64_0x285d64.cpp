#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00285d64
// Address: 0x285d64 - 0x285dd8
void entry_00285d64_0x285d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285d64_0x285d64");
#endif

    ctx->pc = 0x285d64u;

    // 0x285d64: 0x9223660d  lbu         $v1, 0x660D($s1)
    ctx->pc = 0x285d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26125)));
    // 0x285d68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285d70: 0x14830033  bne         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x285D70u;
    {
        const bool branch_taken_0x285d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285d70) {
            ctx->pc = 0x285E40u;
            return;
        }
    }
    ctx->pc = 0x285D78u;
    // 0x285d78: 0xc6216620  lwc1        $f1, 0x6620($s1)
    ctx->pc = 0x285d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285d7c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285d80: 0xc4206178  lwc1        $f0, 0x6178($at)
    ctx->pc = 0x285d80u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x285d84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x285d88: 0xe6206620  swc1        $f0, 0x6620($s1)
    ctx->pc = 0x285d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26144), bits); }
    // 0x285d8c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285d90: 0xc4226178  lwc1        $f2, 0x6178($at)
    ctx->pc = 0x285d90u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285d94: 0x3c053f8c  lui         $a1, 0x3F8C
    ctx->pc = 0x285d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16268 << 16));
    // 0x285d98: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x285d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x285d9c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x285d9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285da0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285da4: 0xc4206180  lwc1        $f0, 0x6180($at)
    ctx->pc = 0x285da4u;
    { uint32_t bits = FAST_READ32(0x396180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285da8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x285da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x285dac: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x285dacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285db0: 0x0  nop
    ctx->pc = 0x285db0u;
    // NOP
    // 0x285db4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x285DB4u;
    {
        const bool branch_taken_0x285db4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285db4) {
            ctx->pc = 0x285DD8u;
            return;
        }
    }
    ctx->pc = 0x285DBCu;
    // 0x285dbc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285dc0: 0xc4216178  lwc1        $f1, 0x6178($at)
    ctx->pc = 0x285dc0u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285dc4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285dc8: 0xc4206180  lwc1        $f0, 0x6180($at)
    ctx->pc = 0x285dc8u;
    { uint32_t bits = FAST_READ32(0x396180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285dcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x285dccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x285dd0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285dd4: 0xe4206178  swc1        $f0, 0x6178($at)
    ctx->pc = 0x285dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x396178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x396178u, _value); } while (0); }
    ctx->pc = 0x285dd8u;
}
