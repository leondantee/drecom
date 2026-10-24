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

// Function: entry_0024c060
// Address: 0x24c060 - 0x24c0b4
void entry_0024c060_0x24c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c060_0x24c060");
#endif

    switch (ctx->pc) {
        case 0x24c08cu: goto label_24c08c;
        case 0x24c098u: goto label_24c098;
        default: break;
    }

    ctx->pc = 0x24c060u;

    // 0x24c060: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x24c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24c064: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c068: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x24c068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x24c06c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C06Cu;
    {
        const bool branch_taken_0x24c06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c06c) {
            ctx->pc = 0x24C0B4u;
            return;
        }
    }
    ctx->pc = 0x24C074u;
    // 0x24c074: 0x24041d02  addiu       $a0, $zero, 0x1D02
    ctx->pc = 0x24c074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7426));
    // 0x24c078: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c078u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c07c: 0x264600b0  addiu       $a2, $s2, 0xB0
    ctx->pc = 0x24c07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x24c080: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c080u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c084: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C084u;
    SET_GPR_U32(ctx, 31, 0x24C08Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C084u, 0x24C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C08Cu;
label_24c08c:
    // 0x24c08c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c08cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c090: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C090u;
    SET_GPR_U32(ctx, 31, 0x24C098u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C090u, 0x24C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C098u;
label_24c098:
    // 0x24c098: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x24c098u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c09c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24c0a0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24c0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24c0a4: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C0A4u;
    {
        const bool branch_taken_0x24c0a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c0a4) {
            ctx->pc = 0x24C0B4u;
            return;
        }
    }
    ctx->pc = 0x24C0ACu;
    // 0x24c0ac: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x24c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c0b0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x24c0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->pc = 0x24c0b4u;
}
