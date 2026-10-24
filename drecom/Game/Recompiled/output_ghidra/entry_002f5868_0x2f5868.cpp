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

// Function: entry_002f5868
// Address: 0x2f5868 - 0x2f5924
void entry_002f5868_0x2f5868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5868_0x2f5868");
#endif

    switch (ctx->pc) {
        case 0x2f58d8u: goto label_2f58d8;
        default: break;
    }

    ctx->pc = 0x2f5868u;

    // 0x2f5868: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f586c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2f586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f5870: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f5874: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5878: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2F5878u;
    {
        const bool branch_taken_0x2f5878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5878) {
            ctx->pc = 0x2F59A0u;
            return;
        }
    }
    ctx->pc = 0x2F5880u;
    // 0x2f5880: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5884: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x2f5884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2f5888: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f588c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f588cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5890: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F5890u;
    {
        const bool branch_taken_0x2f5890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5890) {
            ctx->pc = 0x2F59A0u;
            return;
        }
    }
    ctx->pc = 0x2F5898u;
    // 0x2f5898: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f589c: 0x8c700104  lw          $s0, 0x104($v1)
    ctx->pc = 0x2f589cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2f58a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f58a4: 0x8c730100  lw          $s3, 0x100($v1)
    ctx->pc = 0x2f58a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f58a8: 0x8e64012c  lw          $a0, 0x12C($s3)
    ctx->pc = 0x2f58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x2f58ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f58acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f58b0: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F58B0u;
    {
        const bool branch_taken_0x2f58b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f58b0) {
            ctx->pc = 0x2F5924u;
            return;
        }
    }
    ctx->pc = 0x2F58B8u;
    // 0x2f58b8: 0x8e03035c  lw          $v1, 0x35C($s0)
    ctx->pc = 0x2f58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x2f58bc: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F58BCu;
    {
        const bool branch_taken_0x2f58bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f58bc) {
            ctx->pc = 0x2F5924u;
            return;
        }
    }
    ctx->pc = 0x2F58C4u;
    // 0x2f58c4: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x2f58c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x2f58c8: 0x266500b0  addiu       $a1, $s3, 0xB0
    ctx->pc = 0x2f58c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x2f58cc: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x2f58ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2f58d0: 0xc0bd554  jal         func_2F5550
    ctx->pc = 0x2F58D0u;
    SET_GPR_U32(ctx, 31, 0x2F58D8u);
    ctx->pc = 0x2F5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5550u, 0x2F58D0u, 0x2F58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F58D8u;
label_2f58d8:
    // 0x2f58d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F58D8u;
    {
        const bool branch_taken_0x2f58d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f58d8) {
            ctx->pc = 0x2F5924u;
            return;
        }
    }
    ctx->pc = 0x2F58E0u;
    // 0x2f58e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f58e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f58e4: 0xae03035c  sw          $v1, 0x35C($s0)
    ctx->pc = 0x2f58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 3));
    // 0x2f58e8: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2f58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2f58ec: 0x2463ffe7  addiu       $v1, $v1, -0x19
    ctx->pc = 0x2f58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x2f58f0: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f58f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
    // 0x2f58f4: 0x260302f0  addiu       $v1, $s0, 0x2F0
    ctx->pc = 0x2f58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f58f8: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2f58f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2f58fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f5900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5904: 0x0  nop
    ctx->pc = 0x2f5904u;
    // NOP
    // 0x2f5908: 0xe60002fc  swc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f5908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x2f590c: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x2f590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x2f5910: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2f5910u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2f5914: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f5914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f5918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f591c: 0x0  nop
    ctx->pc = 0x2f591cu;
    // NOP
    // 0x2f5920: 0xe600030c  swc1        $f0, 0x30C($s0)
    ctx->pc = 0x2f5920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
    ctx->pc = 0x2f5924u;
}
