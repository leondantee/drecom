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

// Function: entry_002d662c
// Address: 0x2d662c - 0x2d66dc
void entry_002d662c_0x2d662c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d662c_0x2d662c");
#endif

    ctx->pc = 0x2d662cu;

    // 0x2d662c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6630: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d6630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d6634: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d6634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d6638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d6638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d663c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D663Cu;
    {
        const bool branch_taken_0x2d663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d663c) {
            ctx->pc = 0x2D66E8u;
            return;
        }
    }
    ctx->pc = 0x2D6644u;
    // 0x2d6644: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6648: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d6648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d664c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D664Cu;
    {
        const bool branch_taken_0x2d664c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d664c) {
            ctx->pc = 0x2D66DCu;
            return;
        }
    }
    ctx->pc = 0x2D6654u;
    // 0x2d6654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6658: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d665c: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6660: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6664: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d6664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6668: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2d6668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d666c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6670: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6674: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6678: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d6678u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d667c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6680: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6688: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d6688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d668c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6690: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6694: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6698: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d6698u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d669c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66a0: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d66a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d66a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d66ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d66acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d66b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66b4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d66b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d66b8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2d66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d66bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66c0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d66c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d66c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66c8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d66c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d66cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66d0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d66d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d66d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d66d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d66dcu;
}
