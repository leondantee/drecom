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

// Function: entry_003690cc
// Address: 0x3690cc - 0x3691ac
void entry_003690cc_0x3690cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003690cc_0x3690cc");
#endif

    switch (ctx->pc) {
        case 0x369160u: goto label_369160;
        case 0x36919cu: goto label_36919c;
        default: break;
    }

    ctx->pc = 0x3690ccu;

    // 0x3690cc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3690ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3690d0: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x3690d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x3690d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3690d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3690d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3690d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3690dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3690dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3690e0: 0x2442af30  addiu       $v0, $v0, -0x50D0
    ctx->pc = 0x3690e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946608));
    // 0x3690e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3690e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3690e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3690e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3690ec: 0x402027  not         $a0, $v0
    ctx->pc = 0x3690ecu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x3690f0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x3690f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3690f4: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x3690f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x3690f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3690f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3690fc: 0xac62121c  sw          $v0, 0x121C($v1)
    ctx->pc = 0x3690fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 2));
    // 0x369100: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x369100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x369104: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x369104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x369108: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x369108u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x36910c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x36910cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x369110: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x369110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x369114: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x369114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x369118: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x369118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x36911c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36911cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369120: 0x0  nop
    ctx->pc = 0x369120u;
    // NOP
    // 0x369124: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x369124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x369128: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x369128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x36912c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36912cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369130: 0x0  nop
    ctx->pc = 0x369130u;
    // NOP
    // 0x369134: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x369134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x369138: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x369138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x36913c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36913cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369140: 0x0  nop
    ctx->pc = 0x369140u;
    // NOP
    // 0x369144: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x369144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x369148: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x369148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36914c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x369150: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x369150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x369154: 0x24450970  addiu       $a1, $v0, 0x970
    ctx->pc = 0x369154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
    // 0x369158: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369158u;
    SET_GPR_U32(ctx, 31, 0x369160u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369160u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369160u) { return; }
    ctx->pc = 0x369160u;
label_369160:
    // 0x369160: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x369160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x369164: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x369164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x369168: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x369168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x36916c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x369170: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x369170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x369174: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x369174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x369178: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x369178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36917c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x36917cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x369180: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x369180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x369184: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x369184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x369188: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x369188u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36918c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36918cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x369190: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x369190u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x369194: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x369194u;
    SET_GPR_U32(ctx, 31, 0x36919Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x369194u, 0x36919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36919Cu;
label_36919c:
    // 0x36919c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x36919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3691a0: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x3691a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3691a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3691a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3691a8: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x3691a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3691acu;
}
