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

// Function: Pl_em_dam_em0a_r2_catch
// Address: 0x36a100 - 0x36a2a8
void Pl_em_dam_em0a_r2_catch_0x36a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em0a_r2_catch_0x36a100");
#endif

    switch (ctx->pc) {
        case 0x36a178u: goto label_36a178;
        case 0x36a18cu: goto label_36a18c;
        case 0x36a1d0u: goto label_36a1d0;
        case 0x36a1e8u: goto label_36a1e8;
        case 0x36a20cu: goto label_36a20c;
        case 0x36a22cu: goto label_36a22c;
        case 0x36a240u: goto label_36a240;
        case 0x36a264u: goto label_36a264;
        case 0x36a290u: goto label_36a290;
        default: break;
    }

    ctx->pc = 0x36a100u;

    // 0x36a100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36a100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36a104: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x36a104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x36a108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a10c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a110: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x36a110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x36a114: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x36a114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x36a118: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x36a118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x36a11c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a120: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x36a120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x36a124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a128: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x36a128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a12c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36a12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36a130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a134: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x36A134u;
    {
        const bool branch_taken_0x36a134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36a134) {
            ctx->pc = 0x36A1ACu;
            goto label_36a1ac;
        }
    }
    ctx->pc = 0x36A13Cu;
    // 0x36a13c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A13Cu;
    {
        const bool branch_taken_0x36a13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a13c) {
            ctx->pc = 0x36A14Cu;
            goto label_36a14c;
        }
    }
    ctx->pc = 0x36A144u;
    // 0x36a144: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x36A144u;
    {
        const bool branch_taken_0x36a144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a144) {
            ctx->pc = 0x36A290u;
            goto label_36a290;
        }
    }
    ctx->pc = 0x36A14Cu;
label_36a14c:
    // 0x36a14c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x36a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x36a150: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a154: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x36a154u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x36a158: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a15c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a160: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a164: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x36a164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x36a168: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x36a168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x36a16c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a170: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A170u;
    SET_GPR_U32(ctx, 31, 0x36A178u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A170u, 0x36A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A178u;
label_36a178:
    // 0x36a178: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a17c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x36a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a180: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x36a180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x36a184: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36A184u;
    SET_GPR_U32(ctx, 31, 0x36A18Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36A184u, 0x36A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A18Cu;
label_36a18c:
    // 0x36a18c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a190: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x36a190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x36a194: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a198: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36a198u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36a19c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1a0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a1a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a1a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36a1a8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_36a1ac:
    // 0x36a1ac: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x36a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x36a1b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36a1b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x36a1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36a1b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1c0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x36a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a1c4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x36a1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36a1c8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x36A1C8u;
    SET_GPR_U32(ctx, 31, 0x36A1D0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x36A1C8u, 0x36A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1D0u;
label_36a1d0:
    // 0x36a1d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36a1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36a1d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a1dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a1e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36A1E0u;
    SET_GPR_U32(ctx, 31, 0x36A1E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A1E0u, 0x36A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1E8u;
label_36a1e8:
    // 0x36a1e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1ec: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x36a1ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x36a1f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36A1F0u;
    {
        const bool branch_taken_0x36a1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a1f0) {
            ctx->pc = 0x36A20Cu;
            goto label_36a20c;
        }
    }
    ctx->pc = 0x36A1F8u;
    // 0x36a1f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a200: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x36a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a204: 0xc05cd58  jal         func_173560
    ctx->pc = 0x36A204u;
    SET_GPR_U32(ctx, 31, 0x36A20Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x36A204u, 0x36A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A20Cu;
label_36a20c:
    // 0x36a20c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a210: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a214: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x36a214u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x36a218: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a21c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a220: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a224: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36A224u;
    SET_GPR_U32(ctx, 31, 0x36A22Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36A22Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36A22Cu) { return; }
    ctx->pc = 0x36A22Cu;
label_36a22c:
    // 0x36a22c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36a230: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a234: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36a234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a238: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36A238u;
    SET_GPR_U32(ctx, 31, 0x36A240u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A238u, 0x36A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A240u;
label_36a240:
    // 0x36a240: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x36a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a244: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a248: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x36a248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x36a24c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a250: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a254: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x36a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a258: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36a258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a25c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36A25Cu;
    SET_GPR_U32(ctx, 31, 0x36A264u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36A25Cu, 0x36A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A264u;
label_36a264:
    // 0x36a264: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x36a264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a268: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a26c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36a270: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x36a270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
    // 0x36a274: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x36a274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a278: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a27c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36a27cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36a280: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x36a280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
    // 0x36a284: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a284u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a288: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36A288u;
    SET_GPR_U32(ctx, 31, 0x36A290u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A288u, 0x36A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A290u;
label_36a290:
    // 0x36a290: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36a290u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a29c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x36a29cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36a2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36A2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A2A8u;
}
