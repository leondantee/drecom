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

// Function: entry_001767f0
// Address: 0x1767f0 - 0x1768b4
void entry_001767f0_0x1767f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001767f0_0x1767f0");
#endif

    ctx->pc = 0x1767f0u;

    // 0x1767f0: 0x87a300ce  lh          $v1, 0xCE($sp)
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 206)));
    // 0x1767f4: 0x3ac3c  dsll32      $s5, $v1, 16
    ctx->pc = 0x1767f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1767f8: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x1767f8u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x1767fc: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x1767fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x176800: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176804: 0xa064008c  sb          $a0, 0x8C($v1)
    ctx->pc = 0x176804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x176808: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x176808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x17680c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176810: 0xa064008d  sb          $a0, 0x8D($v1)
    ctx->pc = 0x176810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 141), (uint8_t)GPR_U32(ctx, 4));
    // 0x176814: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x176814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x176818: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17681c: 0xa064008e  sb          $a0, 0x8E($v1)
    ctx->pc = 0x17681cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 4));
    // 0x176820: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x176820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x176824: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176828: 0xa064008f  sb          $a0, 0x8F($v1)
    ctx->pc = 0x176828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 143), (uint8_t)GPR_U32(ctx, 4));
    // 0x17682c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x17682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176830: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176834: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x176834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x176838: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x176838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17683c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x17683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176840: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x176840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x176844: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x176844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176848: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17684c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x17684cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x176850: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x176850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176854: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176858: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x176858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x17685c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176860: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x176864: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x176864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x176868: 0x97a300d8  lhu         $v1, 0xD8($sp)
    ctx->pc = 0x176868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17686c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x176870: 0xa7a300d8  sh          $v1, 0xD8($sp)
    ctx->pc = 0x176870u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 216), (uint16_t)GPR_U32(ctx, 3));
    // 0x176874: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x176874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x176878: 0x1460feb2  bnez        $v1, . + 4 + (-0x14E << 2)
    ctx->pc = 0x176878u;
    {
        const bool branch_taken_0x176878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176878) {
            ctx->pc = 0x176344u;
            return;
        }
    }
    ctx->pc = 0x176880u;
    // 0x176880: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x176880u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x176884: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x176884u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176888: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x176888u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17688c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17688cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176890: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x176890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176894: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x176894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17689c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17689cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1768a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1768a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1768a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1768a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1768a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1768a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1768ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1768ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1768ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1768B4u;
}
