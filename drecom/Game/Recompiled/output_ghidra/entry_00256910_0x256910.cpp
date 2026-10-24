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

// Function: entry_00256910
// Address: 0x256910 - 0x256a28
void entry_00256910_0x256910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256910_0x256910");
#endif

    switch (ctx->pc) {
        case 0x2569a8u: goto label_2569a8;
        default: break;
    }

    ctx->pc = 0x256910u;

    // 0x256910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256914: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x256914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x256918: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x256918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25691c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x256920: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x256920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x256924: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x256924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x256928: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x256928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x25692c: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x25692cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x256930: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x256930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x256934: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x256934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x256938: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x256938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x25693c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x256940: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x256940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x256944: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x256944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x256948: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x256948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25694c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x25694cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x256950: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x256950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x256954: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x256954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x256958: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x256958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25695c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x25695cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x256960: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x256960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x256964: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x256964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x256968: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x256968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25696c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x25696cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x256970: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x256970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x256974: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x256974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x256978: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x256978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x25697c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x25697cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x256980: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x256980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x256984: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x256984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x256988: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x256988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25698c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x25698cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x256990: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x256990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x256994: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x256994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256998: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x256998u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x25699c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25699cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2569a0: 0xc095c30  jal         func_2570C0
    ctx->pc = 0x2569A0u;
    SET_GPR_U32(ctx, 31, 0x2569A8u);
    ctx->pc = 0x2570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2570C0u, 0x2569A0u, 0x2569A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569A8u;
label_2569a8:
    // 0x2569a8: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x2569a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x2569ac: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2569acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2569b0: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x2569b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2569b4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2569b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2569b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2569b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2569bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2569bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2569c0: 0x1c40ff79  bgtz        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x2569C0u;
    {
        const bool branch_taken_0x2569c0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2569c0) {
            ctx->pc = 0x2567A8u;
            return;
        }
    }
    ctx->pc = 0x2569C8u;
    // 0x2569c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2569c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2569cc: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x2569ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2569d0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2569d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2569d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2569d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2569d8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2569d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2569dc: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x2569dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x2569e0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2569e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2569e4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2569e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2569e8: 0x1440fed0  bnez        $v0, . + 4 + (-0x130 << 2)
    ctx->pc = 0x2569E8u;
    {
        const bool branch_taken_0x2569e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2569e8) {
            ctx->pc = 0x25652Cu;
            return;
        }
    }
    ctx->pc = 0x2569F0u;
    // 0x2569f0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2569f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2569f4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2569f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2569f8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2569f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2569fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2569fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256a00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x256a00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256a04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x256a04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256a08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x256a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256a0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256a1c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x256a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x256a20: 0x3e00008  jr          $ra
    ctx->pc = 0x256A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256A28u;
}
