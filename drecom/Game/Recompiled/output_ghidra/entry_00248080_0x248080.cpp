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

// Function: entry_00248080
// Address: 0x248080 - 0x24821c
void entry_00248080_0x248080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248080_0x248080");
#endif

    switch (ctx->pc) {
        case 0x2480acu: goto label_2480ac;
        case 0x2480c8u: goto label_2480c8;
        case 0x2480e0u: goto label_2480e0;
        case 0x2480ecu: goto label_2480ec;
        case 0x248174u: goto label_248174;
        case 0x2481f8u: goto label_2481f8;
        case 0x248200u: goto label_248200;
        default: break;
    }

    ctx->pc = 0x248080u;

    // 0x248080: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x248080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x248084: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x248084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x248088: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x248088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24808c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24808cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248094: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x248094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x248098: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x248098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24809c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2480a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2480a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2480a4: 0xc05c848  jal         func_172120
    ctx->pc = 0x2480A4u;
    SET_GPR_U32(ctx, 31, 0x2480ACu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2480A4u, 0x2480ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480ACu;
label_2480ac:
    // 0x2480ac: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2480acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2480b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2480b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2480b4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2480b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2480b8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2480b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2480bc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2480bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2480c0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2480C0u;
    SET_GPR_U32(ctx, 31, 0x2480C8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2480C0u, 0x2480C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480C8u;
label_2480c8:
    // 0x2480c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2480c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2480cc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2480ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2480d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2480d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2480d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2480d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2480d8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2480D8u;
    SET_GPR_U32(ctx, 31, 0x2480E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2480D8u, 0x2480E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480E0u;
label_2480e0:
    // 0x2480e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2480e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2480e4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2480E4u;
    SET_GPR_U32(ctx, 31, 0x2480ECu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2480E4u, 0x2480ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480ECu;
label_2480ec:
    // 0x2480ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2480ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2480f0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x2480f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2480f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2480f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2480f8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2480f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2480fc: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2480FCu;
    {
        const bool branch_taken_0x2480fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2480fc) {
            ctx->pc = 0x2482CCu;
            return;
        }
    }
    ctx->pc = 0x248104u;
    // 0x248104: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248108: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x248108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x24810c: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x24810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x248110: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x248110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x248114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248118: 0x0  nop
    ctx->pc = 0x248118u;
    // NOP
    // 0x24811c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24811cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x248120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248124: 0x0  nop
    ctx->pc = 0x248124u;
    // NOP
    // 0x248128: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x248128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24812c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24812cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248130: 0x0  nop
    ctx->pc = 0x248130u;
    // NOP
    // 0x248134: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x248134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x248138: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x248138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24813c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24813cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248140: 0x0  nop
    ctx->pc = 0x248140u;
    // NOP
    // 0x248144: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x248144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x248148: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x248148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x24814c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24814cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248150: 0x0  nop
    ctx->pc = 0x248150u;
    // NOP
    // 0x248154: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x248154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x248158: 0xa7a00034  sh          $zero, 0x34($sp)
    ctx->pc = 0x248158u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x24815c: 0xa3a00036  sb          $zero, 0x36($sp)
    ctx->pc = 0x24815cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x248160: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x248160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x248164: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x248164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248168: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x248168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24816c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x24816Cu;
    SET_GPR_U32(ctx, 31, 0x248174u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x24816Cu, 0x248174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248174u;
label_248174:
    // 0x248174: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x248174u;
    {
        const bool branch_taken_0x248174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248174) {
            ctx->pc = 0x2482CCu;
            return;
        }
    }
    ctx->pc = 0x24817Cu;
    // 0x24817c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24817cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248180: 0x0  nop
    ctx->pc = 0x248180u;
    // NOP
    // 0x248184: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x248184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x248188: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x248188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x24818c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24818cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248190: 0x0  nop
    ctx->pc = 0x248190u;
    // NOP
    // 0x248194: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x248194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x248198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24819c: 0x0  nop
    ctx->pc = 0x24819cu;
    // NOP
    // 0x2481a0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2481a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2481a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2481a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2481a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2481a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2481ac: 0x0  nop
    ctx->pc = 0x2481acu;
    // NOP
    // 0x2481b0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2481b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2481b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2481b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2481b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2481b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2481bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2481bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2481c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2481c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2481c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2481c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2481c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2481c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2481cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2481ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2481d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2481d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2481d4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x2481d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2481d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2481d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2481dc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2481dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2481e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2481e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2481e4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2481e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2481e8: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x2481e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x2481ec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2481ecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2481f0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2481F0u;
    SET_GPR_U32(ctx, 31, 0x2481F8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2481F0u, 0x2481F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481F8u;
label_2481f8:
    // 0x2481f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2481F8u;
    SET_GPR_U32(ctx, 31, 0x248200u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2481F8u, 0x248200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248200u;
label_248200:
    // 0x248200: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248200u;
    {
        const bool branch_taken_0x248200 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x248200) {
            ctx->pc = 0x24821Cu;
            return;
        }
    }
    ctx->pc = 0x248208u;
    // 0x248208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x248208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24820c: 0x0  nop
    ctx->pc = 0x24820cu;
    // NOP
    // 0x248210: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x248210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x248214: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x248214u;
    {
        const bool branch_taken_0x248214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248214) {
            ctx->pc = 0x248238u;
            return;
        }
    }
    ctx->pc = 0x24821Cu;
}
