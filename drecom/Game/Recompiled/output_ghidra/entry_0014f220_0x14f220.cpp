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

// Function: entry_0014f220
// Address: 0x14f220 - 0x14f290
void entry_0014f220_0x14f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f220_0x14f220");
#endif

    switch (ctx->pc) {
        case 0x14f258u: goto label_14f258;
        case 0x14f260u: goto label_14f260;
        default: break;
    }

    ctx->pc = 0x14f220u;

label_14f220:
    // 0x14f220: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14f224:
    // 0x14f224: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x14f224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14f228:
    // 0x14f228: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14f228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_14f22c:
    // 0x14f22c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14f22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_14f230:
    // 0x14f230: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
label_14f234:
    if (ctx->pc == 0x14F234u) {
        ctx->pc = 0x14F238u;
        goto label_14f238;
    }
    ctx->pc = 0x14F230u;
    {
        const bool branch_taken_0x14f230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f230) {
            ctx->pc = 0x14F3C8u;
            return;
        }
    }
    ctx->pc = 0x14F238u;
label_14f238:
    // 0x14f238: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14f23c:
    // 0x14f23c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x14f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_14f240:
    // 0x14f240: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x14f240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_14f244:
    // 0x14f244: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
label_14f248:
    if (ctx->pc == 0x14F248u) {
        ctx->pc = 0x14F24Cu;
        goto label_14f24c;
    }
    ctx->pc = 0x14F244u;
    {
        const bool branch_taken_0x14f244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f244) {
            ctx->pc = 0x14F3C8u;
            return;
        }
    }
    ctx->pc = 0x14F24Cu;
label_14f24c:
    // 0x14f24c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f250:
    // 0x14f250: 0xc0675a4  jal         func_19D690
label_14f254:
    if (ctx->pc == 0x14F254u) {
        ctx->pc = 0x14F258u;
        goto label_14f258;
    }
    ctx->pc = 0x14F250u;
    SET_GPR_U32(ctx, 31, 0x14F258u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x14F250u, 0x14F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F258u;
label_14f258:
    // 0x14f258: 0xc067694  jal         func_19DA50
label_14f25c:
    if (ctx->pc == 0x14F25Cu) {
        ctx->pc = 0x14F260u;
        goto label_14f260;
    }
    ctx->pc = 0x14F258u;
    SET_GPR_U32(ctx, 31, 0x14F260u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x14F258u, 0x14F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F260u;
label_14f260:
    // 0x14f260: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f264:
    // 0x14f264: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x14f264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_14f268:
    // 0x14f268: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x14f268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_14f26c:
    // 0x14f26c: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
label_14f270:
    if (ctx->pc == 0x14F270u) {
        ctx->pc = 0x14F274u;
        goto label_14f274;
    }
    ctx->pc = 0x14F26Cu;
    {
        const bool branch_taken_0x14f26c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f26c) {
            ctx->pc = 0x14F3C8u;
            return;
        }
    }
    ctx->pc = 0x14F274u;
label_14f274:
    // 0x14f274: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x14f274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14f278:
    // 0x14f278: 0x2464e920  addiu       $a0, $v1, -0x16E0
    ctx->pc = 0x14f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961440));
label_14f27c:
    // 0x14f27c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14f280:
    // 0x14f280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14f280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14f284:
    // 0x14f284: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14f284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14f288:
    // 0x14f288: 0x600008  jr          $v1
label_14f28c:
    if (ctx->pc == 0x14F28Cu) {
        ctx->pc = 0x14F290u;
        goto label_fallthrough_0x14f288;
    }
    ctx->pc = 0x14F288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F288u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x14f288:
    ctx->pc = 0x14F290u;
}
