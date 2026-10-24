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

// Function: entry_001271f8
// Address: 0x1271f8 - 0x127258
void entry_001271f8_0x1271f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001271f8_0x1271f8");
#endif

    switch (ctx->pc) {
        case 0x127228u: goto label_127228;
        default: break;
    }

    ctx->pc = 0x1271f8u;

label_1271f8:
    // 0x1271f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1271f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1271fc:
    // 0x1271fc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1271fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127200:
    // 0x127200: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x127200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
label_127204:
    // 0x127204: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x127204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_127208:
    // 0x127208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12720c:
    // 0x12720c: 0x0  nop
    ctx->pc = 0x12720cu;
    // NOP
label_127210:
    // 0x127210: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127214:
    // 0x127214: 0x0  nop
    ctx->pc = 0x127214u;
    // NOP
label_127218:
    // 0x127218: 0x45000056  bc1f        . + 4 + (0x56 << 2)
label_12721c:
    if (ctx->pc == 0x12721Cu) {
        ctx->pc = 0x127220u;
        goto label_127220;
    }
    ctx->pc = 0x127218u;
    {
        const bool branch_taken_0x127218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127218) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x127220u;
label_127220:
    // 0x127220: 0xc067694  jal         func_19DA50
label_127224:
    if (ctx->pc == 0x127224u) {
        ctx->pc = 0x127228u;
        goto label_127228;
    }
    ctx->pc = 0x127220u;
    SET_GPR_U32(ctx, 31, 0x127228u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127220u, 0x127228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127228u;
label_127228:
    // 0x127228: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12722c:
    // 0x12722c: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x12722cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_127230:
    // 0x127230: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x127230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_127234:
    // 0x127234: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_127238:
    if (ctx->pc == 0x127238u) {
        ctx->pc = 0x12723Cu;
        goto label_12723c;
    }
    ctx->pc = 0x127234u;
    {
        const bool branch_taken_0x127234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127234) {
            ctx->pc = 0x127334u;
            return;
        }
    }
    ctx->pc = 0x12723Cu;
label_12723c:
    // 0x12723c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12723cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_127240:
    // 0x127240: 0x2464e280  addiu       $a0, $v1, -0x1D80
    ctx->pc = 0x127240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959744));
label_127244:
    // 0x127244: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x127244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_127248:
    // 0x127248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x127248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12724c:
    // 0x12724c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_127250:
    // 0x127250: 0x600008  jr          $v1
label_127254:
    if (ctx->pc == 0x127254u) {
        ctx->pc = 0x127258u;
        goto label_fallthrough_0x127250;
    }
    ctx->pc = 0x127250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127250u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x127250:
    ctx->pc = 0x127258u;
}
