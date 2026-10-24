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

// Function: entry_0031fd70
// Address: 0x31fd70 - 0x31fe2c
void entry_0031fd70_0x31fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fd70_0x31fd70");
#endif

    switch (ctx->pc) {
        case 0x31fd90u: goto label_31fd90;
        case 0x31fdb0u: goto label_31fdb0;
        case 0x31fde8u: goto label_31fde8;
        default: break;
    }

    ctx->pc = 0x31fd70u;

    // 0x31fd70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd74: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd7c: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x31fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x31fd80: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x31fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x31fd84: 0x24660300  addiu       $a2, $v1, 0x300
    ctx->pc = 0x31fd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x31fd88: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FD88u;
    SET_GPR_U32(ctx, 31, 0x31FD90u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FD88u, 0x31FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FD90u;
label_31fd90:
    // 0x31fd90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31fd90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31fd94: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x31fd94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fd9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fda0: 0x260502f0  addiu       $a1, $s0, 0x2F0
    ctx->pc = 0x31fda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x31fda4: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x31fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fda8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FDA8u;
    SET_GPR_U32(ctx, 31, 0x31FDB0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FDA8u, 0x31FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FDB0u;
label_31fdb0:
    // 0x31fdb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31fdb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31fdb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fdb8: 0x0  nop
    ctx->pc = 0x31fdb8u;
    // NOP
    // 0x31fdbc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31fdc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fdc4: 0x8c640270  lw          $a0, 0x270($v1)
    ctx->pc = 0x31fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x31fdc8: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x31fdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x31fdcc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x31FDCCu;
    {
        const bool branch_taken_0x31fdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fdcc) {
            ctx->pc = 0x31FE48u;
            return;
        }
    }
    ctx->pc = 0x31FDD4u;
    // 0x31fdd4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fdd8: 0x244402b0  addiu       $a0, $v0, 0x2B0
    ctx->pc = 0x31fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fddc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x31fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fde0: 0xc0c802c  jal         func_3200B0
    ctx->pc = 0x31FDE0u;
    SET_GPR_U32(ctx, 31, 0x31FDE8u);
    ctx->pc = 0x3200B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3200B0u, 0x31FDE0u, 0x31FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FDE8u;
label_31fde8:
    // 0x31fde8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31FDE8u;
    {
        const bool branch_taken_0x31fde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fde8) {
            ctx->pc = 0x31FE2Cu;
            return;
        }
    }
    ctx->pc = 0x31FDF0u;
    // 0x31fdf0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fdf4: 0x90a40345  lbu         $a0, 0x345($a1)
    ctx->pc = 0x31fdf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x31fdf8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x31fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31fdfc: 0xa0a30345  sb          $v1, 0x345($a1)
    ctx->pc = 0x31fdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fe00: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe04: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x31fe04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x31fe08: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x31fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fe0c: 0xa0a40348  sb          $a0, 0x348($a1)
    ctx->pc = 0x31fe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x31fe10: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fe14: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x31fe14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fe18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fe1c: 0x248302b0  addiu       $v1, $a0, 0x2B0
    ctx->pc = 0x31fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x31fe20: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x31fe20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x31fe24: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31FE24u;
    {
        const bool branch_taken_0x31fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe24) {
            ctx->pc = 0x31FE7Cu;
            return;
        }
    }
    ctx->pc = 0x31FE2Cu;
}
