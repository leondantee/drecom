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

// Function: entry_00285ca8
// Address: 0x285ca8 - 0x285d1c
void entry_00285ca8_0x285ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285ca8_0x285ca8");
#endif

    ctx->pc = 0x285ca8u;

    // 0x285ca8: 0x9223660c  lbu         $v1, 0x660C($s1)
    ctx->pc = 0x285ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26124)));
    // 0x285cac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285cb4: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x285CB4u;
    {
        const bool branch_taken_0x285cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285cb4) {
            ctx->pc = 0x285D64u;
            return;
        }
    }
    ctx->pc = 0x285CBCu;
    // 0x285cbc: 0xc6216620  lwc1        $f1, 0x6620($s1)
    ctx->pc = 0x285cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285cc0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285cc4: 0xc4206178  lwc1        $f0, 0x6178($at)
    ctx->pc = 0x285cc4u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285cc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x285cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285ccc: 0xe6206620  swc1        $f0, 0x6620($s1)
    ctx->pc = 0x285cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26144), bits); }
    // 0x285cd0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285cd4: 0xc4226178  lwc1        $f2, 0x6178($at)
    ctx->pc = 0x285cd4u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285cd8: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x285cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x285cdc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x285cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x285ce0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x285ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285ce4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285ce8: 0xc4206180  lwc1        $f0, 0x6180($at)
    ctx->pc = 0x285ce8u;
    { uint32_t bits = FAST_READ32(0x396180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285cec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x285cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x285cf0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x285cf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285cf4: 0x0  nop
    ctx->pc = 0x285cf4u;
    // NOP
    // 0x285cf8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x285CF8u;
    {
        const bool branch_taken_0x285cf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285cf8) {
            ctx->pc = 0x285D1Cu;
            return;
        }
    }
    ctx->pc = 0x285D00u;
    // 0x285d00: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285d04: 0xc4216178  lwc1        $f1, 0x6178($at)
    ctx->pc = 0x285d04u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285d08: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285d0c: 0xc4206180  lwc1        $f0, 0x6180($at)
    ctx->pc = 0x285d0cu;
    { uint32_t bits = FAST_READ32(0x396180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x285d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x285d14: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285d18: 0xe4206178  swc1        $f0, 0x6178($at)
    ctx->pc = 0x285d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x396178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x396178u, _value); } while (0); }
    ctx->pc = 0x285d1cu;
}
