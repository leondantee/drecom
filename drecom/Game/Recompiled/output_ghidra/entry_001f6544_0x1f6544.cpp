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

// Function: entry_001f6544
// Address: 0x1f6544 - 0x1f65bc
void entry_001f6544_0x1f6544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6544_0x1f6544");
#endif

    ctx->pc = 0x1f6544u;

    // 0x1f6544: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6548: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f6548u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f654c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f654cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6550: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1f6550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1f6554: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f6554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f6558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f655c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6560: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6564: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f6568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f656c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1f656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1f6570: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f6570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f6574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6578: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f657c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f657cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6580: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f6584: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6588: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f658c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f6590: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f6590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f6594: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6598: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6598u;
    {
        const bool branch_taken_0x1f6598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6598) {
            ctx->pc = 0x1F65BCu;
            return;
        }
    }
    ctx->pc = 0x1F65A0u;
    // 0x1f65a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f65a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f65a4: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f65a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f65ac: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1f65acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1f65b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f65b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f65b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f65b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f65b8: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f65b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x1f65bcu;
}
