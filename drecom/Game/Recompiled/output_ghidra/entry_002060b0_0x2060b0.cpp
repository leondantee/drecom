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

// Function: entry_002060b0
// Address: 0x2060b0 - 0x206104
void entry_002060b0_0x2060b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002060b0_0x2060b0");
#endif

    ctx->pc = 0x2060b0u;

    // 0x2060b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2060b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2060b4: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x2060b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x2060b8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2060B8u;
    {
        const bool branch_taken_0x2060b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2060b8) {
            ctx->pc = 0x20610Cu;
            return;
        }
    }
    ctx->pc = 0x2060C0u;
    // 0x2060c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2060c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2060c4: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x2060c4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x2060c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2060c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2060cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2060ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2060d0: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x2060d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2060d4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2060D4u;
    {
        const bool branch_taken_0x2060d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2060d4) {
            ctx->pc = 0x20610Cu;
            return;
        }
    }
    ctx->pc = 0x2060DCu;
    // 0x2060dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2060dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2060e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2060e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2060e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2060e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2060e8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2060e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2060ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2060ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2060f0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2060f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2060f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2060f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2060f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2060f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2060fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2060fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206100: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x206104u;
}
