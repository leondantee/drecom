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

// Function: entry_0018cfec
// Address: 0x18cfec - 0x18d010
void entry_0018cfec_0x18cfec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cfec_0x18cfec");
#endif

    ctx->pc = 0x18cfecu;

    // 0x18cfec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18cfecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cff0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cff4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18cff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18cff8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CFF8u;
    {
        const bool branch_taken_0x18cff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cff8) {
            ctx->pc = 0x18D010u;
            return;
        }
    }
    ctx->pc = 0x18D000u;
    // 0x18d000: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d004: 0xfe020a90  sd          $v0, 0xA90($s0)
    ctx->pc = 0x18d004u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2704), GPR_U64(ctx, 2));
    // 0x18d008: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18D008u;
    {
        const bool branch_taken_0x18d008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d008) {
            ctx->pc = 0x18D018u;
            return;
        }
    }
    ctx->pc = 0x18D010u;
}
