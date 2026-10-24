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

// Function: entry_002cf388
// Address: 0x2cf388 - 0x2cf414
void entry_002cf388_0x2cf388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf388_0x2cf388");
#endif

    ctx->pc = 0x2cf388u;

    // 0x2cf388: 0x2e030012  sltiu       $v1, $s0, 0x12
    ctx->pc = 0x2cf388u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x2cf38c: 0x1460ff28  bnez        $v1, . + 4 + (-0xD8 << 2)
    ctx->pc = 0x2CF38Cu;
    {
        const bool branch_taken_0x2cf38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf38c) {
            ctx->pc = 0x2CF030u;
            return;
        }
    }
    ctx->pc = 0x2CF394u;
    // 0x2cf394: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf398: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x2cf398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2cf39c: 0x24a314d0  addiu       $v1, $a1, 0x14D0
    ctx->pc = 0x2cf39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5328));
    // 0x2cf3a0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2cf3a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2cf3a4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf3a8: 0x2483134c  addiu       $v1, $a0, 0x134C
    ctx->pc = 0x2cf3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf3ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf3b0: 0x8c8501c8  lw          $a1, 0x1C8($a0)
    ctx->pc = 0x2cf3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x2cf3b4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf3b8: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf3bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf3c0: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x2cf3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x2cf3c4: 0x10a3003a  beq         $a1, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2CF3C4u;
    {
        const bool branch_taken_0x2cf3c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cf3c4) {
            ctx->pc = 0x2CF4B0u;
            return;
        }
    }
    ctx->pc = 0x2CF3CCu;
    // 0x2cf3cc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf3d0: 0x2486134c  addiu       $a2, $a0, 0x134C
    ctx->pc = 0x2cf3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf3d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cf3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf3d8: 0x8c6301c8  lw          $v1, 0x1C8($v1)
    ctx->pc = 0x2cf3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x2cf3dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cf3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf3e0: 0x1465000c  bne         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CF3E0u;
    {
        const bool branch_taken_0x2cf3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cf3e0) {
            ctx->pc = 0x2CF414u;
            return;
        }
    }
    ctx->pc = 0x2CF3E8u;
    // 0x2cf3e8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf3ec: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf3f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf3f4: 0x8c6301cc  lw          $v1, 0x1CC($v1)
    ctx->pc = 0x2cf3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
    // 0x2cf3f8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF3F8u;
    {
        const bool branch_taken_0x2cf3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3f8) {
            ctx->pc = 0x2CF414u;
            return;
        }
    }
    ctx->pc = 0x2CF400u;
    // 0x2cf400: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cf400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf404: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf408: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf40c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf410: 0xac8501c8  sw          $a1, 0x1C8($a0)
    ctx->pc = 0x2cf410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 5));
    ctx->pc = 0x2cf414u;
}
