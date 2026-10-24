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

// Function: entry_0025aec4
// Address: 0x25aec4 - 0x25af58
void entry_0025aec4_0x25aec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025aec4_0x25aec4");
#endif

    switch (ctx->pc) {
        case 0x25aedcu: goto label_25aedc;
        default: break;
    }

    ctx->pc = 0x25aec4u;

    // 0x25aec4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aec8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25aec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25aecc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25aed0: 0x244602e0  addiu       $a2, $v0, 0x2E0
    ctx->pc = 0x25aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x25aed4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x25AED4u;
    SET_GPR_U32(ctx, 31, 0x25AEDCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x25AED4u, 0x25AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEDCu;
label_25aedc:
    // 0x25aedc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x25aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25aee0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25aee0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25aee4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aee8: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x25aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x25aeec: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x25aef0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aef4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25aef4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25aef8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25aef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25aefc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25aefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25af00: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x25AF00u;
    {
        const bool branch_taken_0x25af00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af00) {
            ctx->pc = 0x25B100u;
            return;
        }
    }
    ctx->pc = 0x25AF08u;
    // 0x25af08: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25af08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25af0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25af0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25af10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25af10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25af14: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25AF14u;
    {
        const bool branch_taken_0x25af14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25af14) {
            ctx->pc = 0x25AF58u;
            return;
        }
    }
    ctx->pc = 0x25AF1Cu;
    // 0x25af1c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x25af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af20: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af24: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x25af24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x25af28: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25af28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af2c: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25af2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25af30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25af30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25af34: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25af34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25af38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AF38u;
    {
        const bool branch_taken_0x25af38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af38) {
            ctx->pc = 0x25AF58u;
            return;
        }
    }
    ctx->pc = 0x25AF40u;
    // 0x25af40: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af44: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25af44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25af48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25af48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25af4c: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x25af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25af50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25af54: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x25af54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    ctx->pc = 0x25af58u;
}
