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

// Function: entry_0031e120
// Address: 0x31e120 - 0x31e1bc
void entry_0031e120_0x31e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e120_0x31e120");
#endif

    ctx->pc = 0x31e120u;

    // 0x31e120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31e120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e124: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e128: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31e128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31e12c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e130: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31e130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e134: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e138: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31e138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e13c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e140: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31e140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e144: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e148: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31e148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31e14c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e150: 0xac601298  sw          $zero, 0x1298($v1)
    ctx->pc = 0x31e150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4760), GPR_U32(ctx, 0));
    // 0x31e154: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e158: 0xac601290  sw          $zero, 0x1290($v1)
    ctx->pc = 0x31e158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 0));
    // 0x31e15c: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31e160: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31e160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31e164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e168: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e16c: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x31e16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x31e170: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31e170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31e174: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31e174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31e178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e17c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e180: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x31e180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x31e184: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31e184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31e188: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31e188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31e18c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e18cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e190: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e194: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x31e194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x31e198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e19c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e1a0: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x31e1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x31e1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e1a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e1ac: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31e1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x31e1b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e1b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e1b8: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31e1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    ctx->pc = 0x31e1bcu;
}
