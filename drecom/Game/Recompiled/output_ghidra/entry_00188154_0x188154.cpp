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

// Function: entry_00188154
// Address: 0x188154 - 0x1881c8
void entry_00188154_0x188154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188154_0x188154");
#endif

    switch (ctx->pc) {
        case 0x188168u: goto label_188168;
        default: break;
    }

    ctx->pc = 0x188154u;

    // 0x188154: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188158: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x188158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x18815c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x18815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x188160: 0xc061f34  jal         func_187CD0
    ctx->pc = 0x188160u;
    SET_GPR_U32(ctx, 31, 0x188168u);
    ctx->pc = 0x187CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187CD0u, 0x188160u, 0x188168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188168u;
label_188168:
    // 0x188168: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x188168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18816c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18816Cu;
    {
        const bool branch_taken_0x18816c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18816c) {
            ctx->pc = 0x1881C8u;
            return;
        }
    }
    ctx->pc = 0x188174u;
    // 0x188174: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x188174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x188178: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x188178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x18817c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x18817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x188180: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x188180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x188184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188188: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x188188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18818c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18818cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x188190: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x188190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x188194: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x188194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188198: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x188198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x18819c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x18819cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x1881a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1881a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1881a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1881a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1881a8: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x1881a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x1881ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1881acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1881b0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1881b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1881b4: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x1881b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x1881b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1881b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1881bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1881bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1881c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1881c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1881c4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1881c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1881c8u;
}
