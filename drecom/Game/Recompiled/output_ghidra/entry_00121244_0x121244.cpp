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

// Function: entry_00121244
// Address: 0x121244 - 0x12127c
void entry_00121244_0x121244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121244_0x121244");
#endif

    ctx->pc = 0x121244u;

    // 0x121244: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121248: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x121248u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12124c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x12124cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x121250: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121254: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x121254u;
    {
        const bool branch_taken_0x121254 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x121254) {
            ctx->pc = 0x12127Cu;
            return;
        }
    }
    ctx->pc = 0x12125Cu;
    // 0x12125c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x12125cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121260: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x121260u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x121264: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x121264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x121268: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x121268u;
    {
        const bool branch_taken_0x121268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121268) {
            ctx->pc = 0x121280u;
            return;
        }
    }
    ctx->pc = 0x121270u;
    // 0x121270: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x121270u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121274: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x121274u;
    {
        const bool branch_taken_0x121274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121274) {
            ctx->pc = 0x121280u;
            return;
        }
    }
    ctx->pc = 0x12127Cu;
}
