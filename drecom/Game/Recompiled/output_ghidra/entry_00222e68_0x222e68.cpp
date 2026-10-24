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

// Function: entry_00222e68
// Address: 0x222e68 - 0x222eac
void entry_00222e68_0x222e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222e68_0x222e68");
#endif

    ctx->pc = 0x222e68u;

    // 0x222e68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222e6c: 0x90300e05  lbu         $s0, 0xE05($at)
    ctx->pc = 0x222e6cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x222e70: 0x321600ff  andi        $s6, $s0, 0xFF
    ctx->pc = 0x222e70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x222e74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x222e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222e78: 0x16c2000c  bne         $s6, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x222E78u;
    {
        const bool branch_taken_0x222e78 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x222e78) {
            ctx->pc = 0x222EACu;
            return;
        }
    }
    ctx->pc = 0x222E80u;
    // 0x222e80: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x222e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222e84: 0x846210a6  lh          $v0, 0x10A6($v1)
    ctx->pc = 0x222e84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x222e88: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x222e88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x222e8c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x222e8cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x222e90: 0x10b043  sra         $s6, $s0, 1
    ctx->pc = 0x222e90u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 16), 1));
    // 0x222e94: 0x161c3c  dsll32      $v1, $s6, 16
    ctx->pc = 0x222e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 16));
    // 0x222e98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x222e98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x222e9c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x222e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222ea0: 0x845010a6  lh          $s0, 0x10A6($v0)
    ctx->pc = 0x222ea0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x222ea4: 0x203b021  addu        $s6, $s0, $v1
    ctx->pc = 0x222ea4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x222ea8: 0xa45610a6  sh          $s6, 0x10A6($v0)
    ctx->pc = 0x222ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 22));
    ctx->pc = 0x222eacu;
}
