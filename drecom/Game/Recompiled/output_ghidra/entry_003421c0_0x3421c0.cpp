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

// Function: entry_003421c0
// Address: 0x3421c0 - 0x342268
void entry_003421c0_0x3421c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003421c0_0x3421c0");
#endif

    ctx->pc = 0x3421c0u;

    // 0x3421c0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3421c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3421c4: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x3421c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3421c8: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x3421c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x3421cc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3421ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3421d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3421d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3421d4: 0x84440036  lh          $a0, 0x36($v0)
    ctx->pc = 0x3421d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x3421d8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x3421d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3421dc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3421dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3421e0: 0x10650043  beq         $v1, $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x3421E0u;
    {
        const bool branch_taken_0x3421e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3421e0) {
            ctx->pc = 0x3422F0u;
            return;
        }
    }
    ctx->pc = 0x3421E8u;
    // 0x3421e8: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x3421e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3421ec: 0x24c21330  addiu       $v0, $a2, 0x1330
    ctx->pc = 0x3421ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x3421f0: 0x84420036  lh          $v0, 0x36($v0)
    ctx->pc = 0x3421f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x3421f4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3421f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3421f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3421f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3421fc: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x3421fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x342200: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x342200u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x342204: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x342204u;
    {
        const bool branch_taken_0x342204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342204) {
            ctx->pc = 0x342268u;
            return;
        }
    }
    ctx->pc = 0x34220Cu;
    // 0x34220c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342210: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342214: 0x8443003c  lh          $v1, 0x3C($v0)
    ctx->pc = 0x342214u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x342218: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x342218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34221c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34221cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x342220: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x342220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x342224: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x342224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342228: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x342228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x34222c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342230: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342234: 0x84850036  lh          $a1, 0x36($a0)
    ctx->pc = 0x342234u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x342238: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x342238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x34223c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x34223cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x342240: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x342240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x342244: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x342244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x342248: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x342248u;
    {
        const bool branch_taken_0x342248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342248) {
            ctx->pc = 0x342268u;
            return;
        }
    }
    ctx->pc = 0x342250u;
    // 0x342250: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342254: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342258: 0x84500036  lh          $s0, 0x36($v0)
    ctx->pc = 0x342258u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x34225c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x34225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x342260: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342260u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x342264: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x342264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    ctx->pc = 0x342268u;
}
