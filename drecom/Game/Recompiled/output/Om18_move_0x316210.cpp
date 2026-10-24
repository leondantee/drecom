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

// Function: Om18_move
// Address: 0x316210 - 0x316274
void Om18_move_0x316210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_move_0x316210");
#endif

    switch (ctx->pc) {
        case 0x316210u: goto label_316210;
        case 0x316214u: goto label_316214;
        case 0x316218u: goto label_316218;
        case 0x31621cu: goto label_31621c;
        case 0x316220u: goto label_316220;
        case 0x316224u: goto label_316224;
        case 0x316228u: goto label_316228;
        case 0x31622cu: goto label_31622c;
        case 0x316230u: goto label_316230;
        case 0x316234u: goto label_316234;
        case 0x316238u: goto label_316238;
        case 0x31623cu: goto label_31623c;
        case 0x316240u: goto label_316240;
        case 0x316244u: goto label_316244;
        case 0x316248u: goto label_316248;
        case 0x31624cu: goto label_31624c;
        case 0x316250u: goto label_316250;
        case 0x316254u: goto label_316254;
        case 0x316258u: goto label_316258;
        case 0x31625cu: goto label_31625c;
        case 0x316260u: goto label_316260;
        case 0x316264u: goto label_316264;
        case 0x316268u: goto label_316268;
        case 0x31626cu: goto label_31626c;
        case 0x316270u: goto label_316270;
        default: break;
    }

    ctx->pc = 0x316210u;

label_316210:
    // 0x316210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x316210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_316214:
    // 0x316214: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x316214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_316218:
    // 0x316218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31621c:
    // 0x31621c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x31621cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_316220:
    // 0x316220: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x316220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_316224:
    // 0x316224: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x316224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_316228:
    // 0x316228: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x316228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_31622c:
    // 0x31622c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_316230:
    // 0x316230: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x316230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_316234:
    // 0x316234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x316234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_316238:
    // 0x316238: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x316238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31623c:
    // 0x31623c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_316240:
    // 0x316240: 0x24429bb0  addiu       $v0, $v0, -0x6450
    ctx->pc = 0x316240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941616));
label_316244:
    // 0x316244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316248:
    // 0x316248: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x316248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31624c:
    // 0x31624c: 0x40f809  jalr        $v0
label_316250:
    if (ctx->pc == 0x316250u) {
        ctx->pc = 0x316254u;
        goto label_316254;
    }
    ctx->pc = 0x31624Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x316254u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31624Cu, 0x316254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x316254u;
label_316254:
    // 0x316254: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x316254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_316258:
    // 0x316258: 0xc0c6d0c  jal         func_31B430
label_31625c:
    if (ctx->pc == 0x31625Cu) {
        ctx->pc = 0x316260u;
        goto label_316260;
    }
    ctx->pc = 0x316258u;
    SET_GPR_U32(ctx, 31, 0x316260u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x316258u, 0x316260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316260u;
label_316260:
    // 0x316260: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x316260u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316264:
    // 0x316264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_316268:
    // 0x316268: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x316268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_31626c:
    // 0x31626c: 0x3e00008  jr          $ra
label_316270:
    if (ctx->pc == 0x316270u) {
        ctx->pc = 0x316274u;
        goto label_fallthrough_0x31626c;
    }
    ctx->pc = 0x31626Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31626Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31626c:
    ctx->pc = 0x316274u;
}
