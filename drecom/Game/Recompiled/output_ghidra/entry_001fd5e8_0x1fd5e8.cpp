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

// Function: entry_001fd5e8
// Address: 0x1fd5e8 - 0x1fd628
void entry_001fd5e8_0x1fd5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd5e8_0x1fd5e8");
#endif

    switch (ctx->pc) {
        case 0x1fd614u: goto label_1fd614;
        default: break;
    }

    ctx->pc = 0x1fd5e8u;

    // 0x1fd5e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd5ec: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fd5ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fd5f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd5f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd5f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD5F8u;
    {
        const bool branch_taken_0x1fd5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5f8) {
            ctx->pc = 0x1FD628u;
            return;
        }
    }
    ctx->pc = 0x1FD600u;
    // 0x1fd600: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd604: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fd604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd608: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x1fd608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fd60c: 0xc040c44  jal         func_103110
    ctx->pc = 0x1FD60Cu;
    SET_GPR_U32(ctx, 31, 0x1FD614u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1FD614u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD614u) { return; }
    ctx->pc = 0x1FD614u;
label_1fd614:
    // 0x1fd614: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fd614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd618: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fd618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd61c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1fd61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd620: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD620u;
    SET_GPR_U32(ctx, 31, 0x1FD628u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD628u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD628u) { return; }
    ctx->pc = 0x1FD628u;
}
