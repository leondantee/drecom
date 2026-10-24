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

// Function: entry_002a00b8
// Address: 0x2a00b8 - 0x2a02c0
void entry_002a00b8_0x2a00b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a00b8_0x2a00b8");
#endif

    switch (ctx->pc) {
        case 0x2a00c4u: goto label_2a00c4;
        case 0x2a00d0u: goto label_2a00d0;
        case 0x2a00dcu: goto label_2a00dc;
        case 0x2a0194u: goto label_2a0194;
        case 0x2a01ccu: goto label_2a01cc;
        case 0x2a0204u: goto label_2a0204;
        case 0x2a023cu: goto label_2a023c;
        case 0x2a0278u: goto label_2a0278;
        case 0x2a02b4u: goto label_2a02b4;
        default: break;
    }

    ctx->pc = 0x2a00b8u;

    // 0x2a00b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a00b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a00bc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A00BCu;
    SET_GPR_U32(ctx, 31, 0x2A00C4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A00BCu, 0x2A00C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00C4u;
label_2a00c4:
    // 0x2a00c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a00c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a00c8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A00C8u;
    SET_GPR_U32(ctx, 31, 0x2A00D0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A00C8u, 0x2A00D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00D0u;
label_2a00d0:
    // 0x2a00d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a00d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a00d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A00D4u;
    SET_GPR_U32(ctx, 31, 0x2A00DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A00D4u, 0x2A00DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00DCu;
label_2a00dc:
    // 0x2a00dc: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2a00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2a00e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a00e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a00e4: 0x0  nop
    ctx->pc = 0x2a00e4u;
    // NOP
    // 0x2a00e8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2a00e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2a00ec: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a00f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a00f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a00f4: 0x0  nop
    ctx->pc = 0x2a00f4u;
    // NOP
    // 0x2a00f8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2a00f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2a00fc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a0100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0104: 0x0  nop
    ctx->pc = 0x2a0104u;
    // NOP
    // 0x2a0108: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2a0108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2a010c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a0110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0114: 0x0  nop
    ctx->pc = 0x2a0114u;
    // NOP
    // 0x2a0118: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2a0118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2a011c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0124: 0x0  nop
    ctx->pc = 0x2a0124u;
    // NOP
    // 0x2a0128: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a0128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a012c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0134: 0x0  nop
    ctx->pc = 0x2a0134u;
    // NOP
    // 0x2a0138: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a0138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2a013c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0144: 0x0  nop
    ctx->pc = 0x2a0144u;
    // NOP
    // 0x2a0148: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a0148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2a014c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a014cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a0150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0154: 0x0  nop
    ctx->pc = 0x2a0154u;
    // NOP
    // 0x2a0158: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a0158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2a015c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a015cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0160: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a0160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a0164: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0168: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2a0168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2a016c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a016cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0170: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0174: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a0174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0178: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a017c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a017cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0180: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a0180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a0184: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a0184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a0188: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a0188u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a018c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A018Cu;
    SET_GPR_U32(ctx, 31, 0x2A0194u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A018Cu, 0x2A0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0194u;
label_2a0194:
    // 0x2a0194: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2a0194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2a0198: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a019c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a01a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a01a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a01a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a01a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a01a8: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a01a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a01ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a01acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a01b0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a01b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a01b4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a01b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a01b8: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a01b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a01bc: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a01bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a01c0: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a01c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a01c4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A01C4u;
    SET_GPR_U32(ctx, 31, 0x2A01CCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A01C4u, 0x2A01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A01CCu;
label_2a01cc:
    // 0x2a01cc: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2a01ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2a01d0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a01d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a01d4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a01d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a01d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a01dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a01dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a01e0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a01e4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a01e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a01e8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a01e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a01ec: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a01ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a01f0: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a01f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a01f4: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a01f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a01f8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a01f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a01fc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A01FCu;
    SET_GPR_U32(ctx, 31, 0x2A0204u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A01FCu, 0x2A0204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0204u;
label_2a0204:
    // 0x2a0204: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2a0204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0208: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a020c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a020cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0210: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x2a0210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a0214: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0218: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a021c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a0220: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0224: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a0224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0228: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a0228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a022c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a022cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a0230: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a0230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a0234: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0234u;
    SET_GPR_U32(ctx, 31, 0x2A023Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0234u, 0x2A023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A023Cu;
label_2a023c:
    // 0x2a023c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2a023cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0240: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a0240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0244: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a0244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0248: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2a0248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a024c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a024cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0250: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0254: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a0254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0258: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a0258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a025c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0260: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a0260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0264: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a0264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a0268: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a0268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a026c: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a026cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a0270: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0270u;
    SET_GPR_U32(ctx, 31, 0x2A0278u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0270u, 0x2A0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0278u;
label_2a0278:
    // 0x2a0278: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a0278u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a027c: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2a027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2a0280: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a0280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0284: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a0284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0288: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x2a0288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a028c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a028cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0290: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0294: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a0294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0298: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a029c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a029cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a02a0: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a02a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a02a4: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a02a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a02a8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a02a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a02ac: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A02ACu;
    SET_GPR_U32(ctx, 31, 0x2A02B4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A02ACu, 0x2A02B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02B4u;
label_2a02b4:
    // 0x2a02b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a02b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a02b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2A02B8u;
    {
        const bool branch_taken_0x2a02b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a02b8) {
            ctx->pc = 0x2A0340u;
            return;
        }
    }
    ctx->pc = 0x2A02C0u;
}
