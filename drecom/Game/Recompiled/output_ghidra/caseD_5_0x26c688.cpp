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

// Function: caseD_5
// Address: 0x26c688 - 0x26c6d0
void caseD_5_0x26c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x26c688");
#endif

    ctx->pc = 0x26c688u;

    // 0x26c688: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c68c: 0x846213ac  lh          $v0, 0x13AC($v1)
    ctx->pc = 0x26c68cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5036)));
    // 0x26c690: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26C690u;
    {
        const bool branch_taken_0x26c690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c690) {
            ctx->pc = 0x26C6D0u;
            return;
        }
    }
    ctx->pc = 0x26C698u;
    // 0x26c698: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c69c: 0x908209df  lbu         $v0, 0x9DF($a0)
    ctx->pc = 0x26c69cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x26c6a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26c6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26c6a4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x26c6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x26c6a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C6A8u;
    {
        const bool branch_taken_0x26c6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c6a8) {
            ctx->pc = 0x26C6D0u;
            return;
        }
    }
    ctx->pc = 0x26C6B0u;
    // 0x26c6b0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x26c6b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c6b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26c6b8: 0x30440080  andi        $a0, $v0, 0x80
    ctx->pc = 0x26c6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x26c6bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C6BCu;
    {
        const bool branch_taken_0x26c6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c6bc) {
            ctx->pc = 0x26C6D0u;
            return;
        }
    }
    ctx->pc = 0x26C6C4u;
    // 0x26c6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c6c8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c6cc: 0xaca21b68  sw          $v0, 0x1B68($a1)
    ctx->pc = 0x26c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7016), GPR_U32(ctx, 2));
    ctx->pc = 0x26c6d0u;
}
