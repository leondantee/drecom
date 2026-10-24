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

// Function: entry_001fe540
// Address: 0x1fe540 - 0x1fe580
void entry_001fe540_0x1fe540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe540_0x1fe540");
#endif

    ctx->pc = 0x1fe540u;

    // 0x1fe540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe544: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe548: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe54c: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x1fe54cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe550: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE550u;
    {
        const bool branch_taken_0x1fe550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe550) {
            ctx->pc = 0x1FE504u;
            return;
        }
    }
    ctx->pc = 0x1FE558u;
    // 0x1fe558: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe55c: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x1fe55cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fe560: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe564: 0x148000ac  bnez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1FE564u;
    {
        const bool branch_taken_0x1fe564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe564) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE56Cu;
    // 0x1fe56c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fe56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe570: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe574: 0xac830358  sw          $v1, 0x358($a0)
    ctx->pc = 0x1fe574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 856), GPR_U32(ctx, 3));
    // 0x1fe578: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1FE578u;
    {
        const bool branch_taken_0x1fe578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe578) {
            ctx->pc = 0x1FE838u;
            return;
        }
    }
    ctx->pc = 0x1FE580u;
}
