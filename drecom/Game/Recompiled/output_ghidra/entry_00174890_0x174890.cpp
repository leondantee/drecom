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

// Function: entry_00174890
// Address: 0x174890 - 0x174954
void entry_00174890_0x174890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174890_0x174890");
#endif

    ctx->pc = 0x174890u;

    // 0x174890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174894: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x174894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174898: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x174898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17489c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17489cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1748a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1748a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1748a4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1748a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1748a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1748a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1748ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1748acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1748b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1748b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1748b4: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x1748b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x1748b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1748b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1748bc: 0xe460011c  swc1        $f0, 0x11C($v1)
    ctx->pc = 0x1748bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 284), bits); }
    // 0x1748c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1748c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1748c4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1748c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1748c8: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1748c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1748cc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1748ccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1748d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1748d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1748d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1748d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1748d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1748d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1748dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1748dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1748e0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1748e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1748e4: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x1748e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x1748e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1748e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1748ec: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1748ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1748f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1748f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1748f4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1748f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1748f8: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1748f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1748fc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1748fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x174900: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174904: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174908: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17490c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174910: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x174910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174914: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x174914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x174918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x174918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17491c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x17491cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x174920: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x174920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174924: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x174924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x174928: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174928u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17492c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17492cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174930: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174934: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174938: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x174938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17493c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17493cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174940: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x174940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x174944: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174948: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x174948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x17494c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x17494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x174950: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x174950u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x174954u;
}
