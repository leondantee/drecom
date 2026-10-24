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

// Function: entry_0022efa0
// Address: 0x22efa0 - 0x22f020
void entry_0022efa0_0x22efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022efa0_0x22efa0");
#endif

    ctx->pc = 0x22efa0u;

    // 0x22efa0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22efa4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x22efa4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x22efa8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22efac: 0xa4a0127e  sh          $zero, 0x127E($a1)
    ctx->pc = 0x22efacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x22efb0: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x22efb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22efb4: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x22efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x22efb8: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x22efb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x22efbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22efbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22efc0: 0xc4e00188  lwc1        $f0, 0x188($a3)
    ctx->pc = 0x22efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22efc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22efc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22efc8: 0xe4e00188  swc1        $f0, 0x188($a3)
    ctx->pc = 0x22efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 392), bits); }
    // 0x22efcc: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22efccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22efd0: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x22efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x22efd4: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x22efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x22efd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22efd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22efdc: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x22efdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22efe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22efe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22efe4: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x22efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x22efe8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22efec: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x22efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22eff0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x22eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22eff4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x22eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x22eff8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22eff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22effc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22EFFCu;
    {
        const bool branch_taken_0x22effc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22effc) {
            ctx->pc = 0x22F020u;
            return;
        }
    }
    ctx->pc = 0x22F004u;
    // 0x22f004: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22f004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22f008: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x22f008u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22f00c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22f010: 0x34457fff  ori         $a1, $v0, 0x7FFF
    ctx->pc = 0x22f010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x22f014: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x22f014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x22f018: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22f018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22f01c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22f01cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x22f020u;
}
