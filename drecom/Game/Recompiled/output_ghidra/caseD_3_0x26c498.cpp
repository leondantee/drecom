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

// Function: caseD_3
// Address: 0x26c498 - 0x26c4e0
void caseD_3_0x26c498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x26c498");
#endif

    ctx->pc = 0x26c498u;

    // 0x26c498: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c49c: 0x844213ac  lh          $v0, 0x13AC($v0)
    ctx->pc = 0x26c49cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5036)));
    // 0x26c4a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26C4A0u;
    {
        const bool branch_taken_0x26c4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4a0) {
            ctx->pc = 0x26C4E0u;
            return;
        }
    }
    ctx->pc = 0x26C4A8u;
    // 0x26c4a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c4ac: 0x904209df  lbu         $v0, 0x9DF($v0)
    ctx->pc = 0x26c4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
    // 0x26c4b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26c4b4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26c4b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C4B8u;
    {
        const bool branch_taken_0x26c4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4b8) {
            ctx->pc = 0x26C4E0u;
            return;
        }
    }
    ctx->pc = 0x26C4C0u;
    // 0x26c4c0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x26c4c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c4c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26c4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26c4c8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x26c4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x26c4cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C4CCu;
    {
        const bool branch_taken_0x26c4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4cc) {
            ctx->pc = 0x26C4E0u;
            return;
        }
    }
    ctx->pc = 0x26C4D4u;
    // 0x26c4d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c4d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c4dc: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x26c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
    ctx->pc = 0x26c4e0u;
}
