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

// Function: entry_0023a720
// Address: 0x23a720 - 0x23a7a4
void entry_0023a720_0x23a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a720_0x23a720");
#endif

    ctx->pc = 0x23a720u;

    // 0x23a720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a724: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a728: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a72c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23a72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23a730: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x23a730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x23a734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a738: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a73c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a740: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23a744: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23a744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23a748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a74c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a754: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23a754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23a758: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23a758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23a75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a760: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a764: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a768: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23a768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23a76c: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x23a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x23a770: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x23a770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x23a774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a778: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a77c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a780: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23a780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23a784: 0x3c023a64  lui         $v0, 0x3A64
    ctx->pc = 0x23a784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14948 << 16));
    // 0x23a788: 0x3442c388  ori         $v0, $v0, 0xC388
    ctx->pc = 0x23a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x23a78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a790: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a794: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a798: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23a798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23a79c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a7a0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x23a7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x23a7a4u;
}
