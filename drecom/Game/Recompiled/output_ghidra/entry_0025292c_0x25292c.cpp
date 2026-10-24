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

// Function: entry_0025292c
// Address: 0x25292c - 0x2529ec
void entry_0025292c_0x25292c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025292c_0x25292c");
#endif

    switch (ctx->pc) {
        case 0x2529b4u: goto label_2529b4;
        case 0x2529c0u: goto label_2529c0;
        default: break;
    }

    ctx->pc = 0x25292cu;

    // 0x25292c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x25292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252930: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x252930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x252934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252938: 0x0  nop
    ctx->pc = 0x252938u;
    // NOP
    // 0x25293c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25293cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252940: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x252940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x252944: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252948: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x252948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x25294c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25294cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252950: 0x0  nop
    ctx->pc = 0x252950u;
    // NOP
    // 0x252954: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252958: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x252958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25295c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x25295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x252960: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x252960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x252964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252968: 0x0  nop
    ctx->pc = 0x252968u;
    // NOP
    // 0x25296c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x25296cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x252970: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x252970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x252974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252978: 0x0  nop
    ctx->pc = 0x252978u;
    // NOP
    // 0x25297c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x25297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x252980: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x252980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x252984: 0x90420108  lbu         $v0, 0x108($v0)
    ctx->pc = 0x252984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x252988: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x252988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25298c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x252990: 0x34426300  ori         $v0, $v0, 0x6300
    ctx->pc = 0x252990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25344);
    // 0x252994: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x252994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x252998: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x252998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x25299c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25299cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2529a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2529a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2529a4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2529a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2529a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2529a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2529ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2529ACu;
    SET_GPR_U32(ctx, 31, 0x2529B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2529ACu, 0x2529B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529B4u;
label_2529b4:
    // 0x2529b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2529b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2529b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2529B8u;
    SET_GPR_U32(ctx, 31, 0x2529C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2529B8u, 0x2529C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529C0u;
label_2529c0:
    // 0x2529c0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2529c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2529c4: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x2529c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
    // 0x2529c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2529c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2529cc: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2529ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2529d0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2529d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2529d4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2529d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2529d8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2529D8u;
    {
        const bool branch_taken_0x2529d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2529d8) {
            ctx->pc = 0x2529ECu;
            return;
        }
    }
    ctx->pc = 0x2529E0u;
    // 0x2529e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2529e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2529e4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2529e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2529e8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2529e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    ctx->pc = 0x2529ecu;
}
