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

// Function: R121_init
// Address: 0x27f420 - 0x27f4c0
void R121_init_0x27f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R121_init_0x27f420");
#endif

    switch (ctx->pc) {
        case 0x27f438u: goto label_27f438;
        case 0x27f440u: goto label_27f440;
        case 0x27f448u: goto label_27f448;
        case 0x27f450u: goto label_27f450;
        case 0x27f474u: goto label_27f474;
        case 0x27f488u: goto label_27f488;
        default: break;
    }

    ctx->pc = 0x27f420u;

    // 0x27f420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f424: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x27f424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x27f428: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f42c: 0x24441fd0  addiu       $a0, $v0, 0x1FD0
    ctx->pc = 0x27f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8144));
    // 0x27f430: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x27F430u;
    SET_GPR_U32(ctx, 31, 0x27F438u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x27F430u, 0x27F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F438u;
label_27f438:
    // 0x27f438: 0xc09ff60  jal         func_27FD80
    ctx->pc = 0x27F438u;
    SET_GPR_U32(ctx, 31, 0x27F440u);
    ctx->pc = 0x27FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FD80u, 0x27F438u, 0x27F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F440u;
label_27f440:
    // 0x27f440: 0xc09ff78  jal         func_27FDE0
    ctx->pc = 0x27F440u;
    SET_GPR_U32(ctx, 31, 0x27F448u);
    ctx->pc = 0x27FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FDE0u, 0x27F440u, 0x27F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F448u;
label_27f448:
    // 0x27f448: 0xc09ffcc  jal         func_27FF30
    ctx->pc = 0x27F448u;
    SET_GPR_U32(ctx, 31, 0x27F450u);
    ctx->pc = 0x27FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FF30u, 0x27F448u, 0x27F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F450u;
label_27f450:
    // 0x27f450: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f454: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27f454u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27f458: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x27f458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x27f45c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27F45Cu;
    {
        const bool branch_taken_0x27f45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f45c) {
            ctx->pc = 0x27F488u;
            goto label_27f488;
        }
    }
    ctx->pc = 0x27F464u;
    // 0x27f464: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f468: 0x24442040  addiu       $a0, $v0, 0x2040
    ctx->pc = 0x27f468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8256));
    // 0x27f46c: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27F46Cu;
    SET_GPR_U32(ctx, 31, 0x27F474u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27F46Cu, 0x27F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F474u;
label_27f474:
    // 0x27f474: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27f474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f478: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27f478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27f47c: 0x2445f4f0  addiu       $a1, $v0, -0xB10
    ctx->pc = 0x27f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964464));
    // 0x27f480: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27F480u;
    SET_GPR_U32(ctx, 31, 0x27F488u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27F480u, 0x27F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F488u;
label_27f488:
    // 0x27f488: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27f488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27f48c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f490: 0xa023d4b1  sb          $v1, -0x2B4F($at)
    ctx->pc = 0x27f490u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x27f494: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27f494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27f498: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f49c: 0xac23d4b8  sw          $v1, -0x2B48($at)
    ctx->pc = 0x27f49cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD4B8u, _value); } while (0);
    // 0x27f4a0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27f4a4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x27f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x27f4a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27f4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27f4ac: 0xac23d4bc  sw          $v1, -0x2B44($at)
    ctx->pc = 0x27f4acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD4BCu, _value); } while (0);
    // 0x27f4b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27f4b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f4b4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27f4b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x27F4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F4C0u;
}
