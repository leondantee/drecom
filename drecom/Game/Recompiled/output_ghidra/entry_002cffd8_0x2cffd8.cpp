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

// Function: entry_002cffd8
// Address: 0x2cffd8 - 0x2d00a0
void entry_002cffd8_0x2cffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cffd8_0x2cffd8");
#endif

    ctx->pc = 0x2cffd8u;

    // 0x2cffd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cffd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cffdc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2cffe0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2cffe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cffe4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cffe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cffec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cffecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cfff0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2cfff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cfff4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cfff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cfff8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cfff8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2cfffc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2cfffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d0000: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d0004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0008: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d0008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d000c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d000cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d0010: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d0010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d0014: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0018: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d0018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d001c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d001cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0020: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2d0020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2d0024: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D0024u;
    {
        const bool branch_taken_0x2d0024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0024) {
            ctx->pc = 0x2D00A0u;
            return;
        }
    }
    ctx->pc = 0x2D002Cu;
    // 0x2d002c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0030: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0034: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0038: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2d0038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2d003c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0040: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0044: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d0044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0048: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d004c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d0050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0054: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2d0054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0058: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2d0058u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2d005c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2d005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0060: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d0060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d0064: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2d0064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d0068: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d0068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d006c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d006cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0070: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0074: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2d0074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2d0078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d007c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0080: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d0080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0084: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0088: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d0088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d008c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0090: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d0090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0094: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d0094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0098: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2D0098u;
    SET_GPR_U32(ctx, 31, 0x2D00A0u);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2D0098u, 0x2D00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00A0u;
}
