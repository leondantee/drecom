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

// Function: entry_00311310
// Address: 0x311310 - 0x3113d4
void entry_00311310_0x311310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311310_0x311310");
#endif

    ctx->pc = 0x311310u;

    // 0x311310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311314: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x311314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311318: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x311318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x31131c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31131cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x311320: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x311324: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x311324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x311328: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31132c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x311330: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x311330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x311334: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x311334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x311338: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x311338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31133c: 0xe460011c  swc1        $f0, 0x11C($v1)
    ctx->pc = 0x31133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 284), bits); }
    // 0x311340: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311344: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x311344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311348: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x311348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x31134c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31134cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x311350: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x311354: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x311354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x311358: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31135c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31135cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x311360: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x311360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x311364: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x311364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x311368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x311368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31136c: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x31136cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x311370: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311374: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x311374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311378: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x311378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x31137c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31137cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x311380: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x311384: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x311384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x311388: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x311388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31138c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x311390: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x311390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x311394: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x311394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x311398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x311398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31139c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x31139cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x3113a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3113a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3113a4: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x3113a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3113a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3113a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3113ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3113acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3113b0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3113b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3113b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3113b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3113b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3113b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3113bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3113bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3113c0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3113c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3113c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3113c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3113c8: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x3113c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x3113cc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3113ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3113d0: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x3113d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3113d4u;
}
