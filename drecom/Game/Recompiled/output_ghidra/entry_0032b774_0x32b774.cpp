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

// Function: entry_0032b774
// Address: 0x32b774 - 0x32b7c4
void entry_0032b774_0x32b774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b774_0x32b774");
#endif

    ctx->pc = 0x32b774u;

    // 0x32b774: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32b774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32b778: 0x2455a5c8  addiu       $s5, $v0, -0x5A38
    ctx->pc = 0x32b778u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944200));
    // 0x32b77c: 0x92c228ba  lbu         $v0, 0x28BA($s6)
    ctx->pc = 0x32b77cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32b780: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x32b780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32b784: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b788: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32B788u;
    {
        const bool branch_taken_0x32b788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b788) {
            ctx->pc = 0x32B7E4u;
            return;
        }
    }
    ctx->pc = 0x32B790u;
    // 0x32b790: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b794: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32B794u;
    {
        const bool branch_taken_0x32b794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b794) {
            ctx->pc = 0x32B7E4u;
            return;
        }
    }
    ctx->pc = 0x32B79Cu;
    // 0x32b79c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b7a0: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32B7A0u;
    {
        const bool branch_taken_0x32b7a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b7a0) {
            ctx->pc = 0x32B7E4u;
            return;
        }
    }
    ctx->pc = 0x32B7A8u;
    // 0x32b7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b7ac: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32B7ACu;
    {
        const bool branch_taken_0x32b7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b7ac) {
            ctx->pc = 0x32B7D4u;
            return;
        }
    }
    ctx->pc = 0x32B7B4u;
    // 0x32b7b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B7B4u;
    {
        const bool branch_taken_0x32b7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b7b4) {
            ctx->pc = 0x32B7C4u;
            return;
        }
    }
    ctx->pc = 0x32B7BCu;
    // 0x32b7bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x32B7BCu;
    {
        const bool branch_taken_0x32b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b7bc) {
            ctx->pc = 0x32B7F4u;
            return;
        }
    }
    ctx->pc = 0x32B7C4u;
}
