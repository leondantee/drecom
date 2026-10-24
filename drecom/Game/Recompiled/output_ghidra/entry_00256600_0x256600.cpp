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

// Function: entry_00256600
// Address: 0x256600 - 0x2566e4
void entry_00256600_0x256600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256600_0x256600");
#endif

    switch (ctx->pc) {
        case 0x256624u: goto label_256624;
        case 0x25664cu: goto label_25664c;
        default: break;
    }

    ctx->pc = 0x256600u;

    // 0x256600: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x256604: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x256604u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x256608: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x256608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25660c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x25660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256610: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x256610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x256614: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x256614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256618: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x256618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25661c: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x25661Cu;
    SET_GPR_U32(ctx, 31, 0x256624u);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x25661Cu, 0x256624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256624u;
label_256624:
    // 0x256624: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x256624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256628: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x256628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x25662c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x25662cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x256630: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x256630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256634: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256638: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x256638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x25663c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x25663cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x256640: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x256640u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x256644: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x256644u;
    SET_GPR_U32(ctx, 31, 0x25664Cu);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x256644u, 0x25664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25664Cu;
label_25664c:
    // 0x25664c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x256650: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256654: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x256654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x256658: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x256658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25665c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x25665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256660: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x256660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x256664: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x256664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x256668: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25666c: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x25666cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x256670: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x256670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256674: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x256674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x256678: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x256678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25667c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x25667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x256680: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x256680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x256684: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x256684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x256688: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x256688u;
    {
        const bool branch_taken_0x256688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256688) {
            ctx->pc = 0x256760u;
            return;
        }
    }
    ctx->pc = 0x256690u;
    // 0x256690: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x256690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x256694: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x256694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x256698: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x256698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x25669c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x25669cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2566a0: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x2566a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x2566a4: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x2566a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x2566a8: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x2566a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2566ac: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2566ACu;
    {
        const bool branch_taken_0x2566ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2566ac) {
            ctx->pc = 0x256700u;
            return;
        }
    }
    ctx->pc = 0x2566B4u;
    // 0x2566b4: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x2566b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x2566b8: 0x21a42  srl         $v1, $v0, 9
    ctx->pc = 0x2566b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x2566bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2566bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2566c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2566C0u;
    {
        const bool branch_taken_0x2566c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2566c0) {
            ctx->pc = 0x2566E4u;
            return;
        }
    }
    ctx->pc = 0x2566C8u;
    // 0x2566c8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2566c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2566cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2566ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2566d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2566d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2566d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2566d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2566d8: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x2566d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x2566dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2566DCu;
    {
        const bool branch_taken_0x2566dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2566dc) {
            ctx->pc = 0x256760u;
            return;
        }
    }
    ctx->pc = 0x2566E4u;
}
