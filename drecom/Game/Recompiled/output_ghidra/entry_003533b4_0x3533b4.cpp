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

// Function: entry_003533b4
// Address: 0x3533b4 - 0x353404
void entry_003533b4_0x3533b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003533b4_0x3533b4");
#endif

    ctx->pc = 0x3533b4u;

    // 0x3533b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3533b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3533b8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3533b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3533bc: 0x9083006e  lbu         $v1, 0x6E($a0)
    ctx->pc = 0x3533bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 110)));
    // 0x3533c0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3533c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3533c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3533c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3533c8: 0x10a400f6  beq         $a1, $a0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x3533C8u;
    {
        const bool branch_taken_0x3533c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3533c8) {
            ctx->pc = 0x3537A4u;
            return;
        }
    }
    ctx->pc = 0x3533D0u;
    // 0x3533d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3533d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3533d4: 0x10a300bf  beq         $a1, $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x3533D4u;
    {
        const bool branch_taken_0x3533d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3533d4) {
            ctx->pc = 0x3536D4u;
            return;
        }
    }
    ctx->pc = 0x3533DCu;
    // 0x3533dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3533dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3533e0: 0x10a30092  beq         $a1, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x3533E0u;
    {
        const bool branch_taken_0x3533e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3533e0) {
            ctx->pc = 0x35362Cu;
            return;
        }
    }
    ctx->pc = 0x3533E8u;
    // 0x3533e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3533e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3533ec: 0x10a4003c  beq         $a1, $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3533ECu;
    {
        const bool branch_taken_0x3533ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3533ec) {
            ctx->pc = 0x3534E0u;
            return;
        }
    }
    ctx->pc = 0x3533F4u;
    // 0x3533f4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3533F4u;
    {
        const bool branch_taken_0x3533f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3533f4) {
            ctx->pc = 0x353404u;
            return;
        }
    }
    ctx->pc = 0x3533FCu;
    // 0x3533fc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x3533FCu;
    {
        const bool branch_taken_0x3533fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3533fc) {
            ctx->pc = 0x353870u;
            return;
        }
    }
    ctx->pc = 0x353404u;
}
