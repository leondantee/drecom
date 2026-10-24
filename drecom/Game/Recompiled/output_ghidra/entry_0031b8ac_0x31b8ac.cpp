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

// Function: entry_0031b8ac
// Address: 0x31b8ac - 0x31b94c
void entry_0031b8ac_0x31b8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b8ac_0x31b8ac");
#endif

    switch (ctx->pc) {
        case 0x31b8dcu: goto label_31b8dc;
        case 0x31b8f0u: goto label_31b8f0;
        case 0x31b904u: goto label_31b904;
        default: break;
    }

    ctx->pc = 0x31b8acu;

    // 0x31b8ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b8b0: 0x8c6312b4  lw          $v1, 0x12B4($v1)
    ctx->pc = 0x31b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4788)));
    // 0x31b8b4: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x31b8b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x31b8b8: 0x14200024  bnez        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x31B8B8u;
    {
        const bool branch_taken_0x31b8b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b8b8) {
            ctx->pc = 0x31B94Cu;
            return;
        }
    }
    ctx->pc = 0x31B8C0u;
    // 0x31b8c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b8c4: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b8cc: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x31b8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31b8d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b8d4: 0xc05db20  jal         func_176C80
    ctx->pc = 0x31B8D4u;
    SET_GPR_U32(ctx, 31, 0x31B8DCu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x31B8D4u, 0x31B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8DCu;
label_31b8dc:
    // 0x31b8dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31b8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b8e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b8e4: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b8e8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x31B8E8u;
    SET_GPR_U32(ctx, 31, 0x31B8F0u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x31B8E8u, 0x31B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8F0u;
label_31b8f0:
    // 0x31b8f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31b8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b8f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b8f8: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b8fc: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x31B8FCu;
    SET_GPR_U32(ctx, 31, 0x31B904u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x31B8FCu, 0x31B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B904u;
label_31b904:
    // 0x31b904: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b908: 0xac6012b0  sw          $zero, 0x12B0($v1)
    ctx->pc = 0x31b908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 0));
    // 0x31b90c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x31b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b910: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x31b910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31b914: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x31b914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x31b918: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31b918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31b91c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x31b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x31b920: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b924: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b928: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b92c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b930: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b934: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b938: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b93c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b940: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x31b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x31b944: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x31b944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x31b948: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x31b948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    ctx->pc = 0x31b94cu;
}
