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

// Function: entry_002629d8
// Address: 0x2629d8 - 0x262ad8
void entry_002629d8_0x2629d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002629d8_0x2629d8");
#endif

    switch (ctx->pc) {
        case 0x262a70u: goto label_262a70;
        case 0x262a80u: goto label_262a80;
        case 0x262a94u: goto label_262a94;
        case 0x262ab4u: goto label_262ab4;
        case 0x262ac8u: goto label_262ac8;
        default: break;
    }

    ctx->pc = 0x2629d8u;

    // 0x2629d8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2629d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2629dc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2629dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2629e0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2629e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2629e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2629e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2629e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2629e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2629ec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2629ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2629f0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x2629f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x2629f4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2629f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2629f8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2629f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2629fc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2629fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262a00: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x262a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x262a04: 0x146000d8  bnez        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x262A04u;
    {
        const bool branch_taken_0x262a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262a04) {
            ctx->pc = 0x262D68u;
            return;
        }
    }
    ctx->pc = 0x262A0Cu;
    // 0x262a0c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x262a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262a10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x262a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262a14: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x262a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x262a18: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x262a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x262a1c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x262a1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x262a20: 0xdca30a08  ld          $v1, 0xA08($a1)
    ctx->pc = 0x262a20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 2568)));
    // 0x262a24: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x262a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x262a28: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x262A28u;
    {
        const bool branch_taken_0x262a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a28) {
            ctx->pc = 0x262BCCu;
            return;
        }
    }
    ctx->pc = 0x262A30u;
    // 0x262a30: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262a34: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x262a34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x262a38: 0x106000cb  beqz        $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x262A38u;
    {
        const bool branch_taken_0x262a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a38) {
            ctx->pc = 0x262D68u;
            return;
        }
    }
    ctx->pc = 0x262A40u;
    // 0x262a40: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x262a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262a44: 0x8c42034c  lw          $v0, 0x34C($v0)
    ctx->pc = 0x262a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 844)));
    // 0x262a48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x262a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x262a4c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x262a4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262a50: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x262a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262a54: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x262a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x262a58: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x262A58u;
    {
        const bool branch_taken_0x262a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262a58) {
            ctx->pc = 0x262AD8u;
            return;
        }
    }
    ctx->pc = 0x262A60u;
    // 0x262a60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x262a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262a64: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x262a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x262a68: 0xc040c9e  jal         func_103278
    ctx->pc = 0x262A68u;
    SET_GPR_U32(ctx, 31, 0x262A70u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x262A70u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262A70u) { return; }
    ctx->pc = 0x262A70u;
label_262a70:
    // 0x262a70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x262a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262a74: 0x260500f0  addiu       $a1, $s0, 0xF0
    ctx->pc = 0x262a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x262a78: 0xc040c9e  jal         func_103278
    ctx->pc = 0x262A78u;
    SET_GPR_U32(ctx, 31, 0x262A80u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x262A80u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262A80u) { return; }
    ctx->pc = 0x262A80u;
label_262a80:
    // 0x262a80: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x262a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262a84: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x262a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262a88: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x262a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262a8c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262A8Cu;
    SET_GPR_U32(ctx, 31, 0x262A94u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262A94u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262A94u) { return; }
    ctx->pc = 0x262A94u;
label_262a94:
    // 0x262a94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262a98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262a9c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x262a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262aa0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x262aa0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262aa4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x262aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262aa8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x262aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262aac: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262AACu;
    SET_GPR_U32(ctx, 31, 0x262AB4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262AB4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262AB4u) { return; }
    ctx->pc = 0x262AB4u;
label_262ab4:
    // 0x262ab4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x262ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x262ab8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x262ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262abc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x262abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262ac0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x262AC0u;
    SET_GPR_U32(ctx, 31, 0x262AC8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x262AC0u, 0x262AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262AC8u;
label_262ac8:
    // 0x262ac8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262ad0: 0x0  nop
    ctx->pc = 0x262ad0u;
    // NOP
    // 0x262ad4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x262ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    ctx->pc = 0x262ad8u;
}
