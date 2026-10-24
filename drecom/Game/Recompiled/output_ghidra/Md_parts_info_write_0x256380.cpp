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

// Function: Md_parts_info_write
// Address: 0x256380 - 0x2564d0
void Md_parts_info_write_0x256380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_info_write_0x256380");
#endif

    switch (ctx->pc) {
        case 0x2563c8u: goto label_2563c8;
        case 0x256448u: goto label_256448;
        default: break;
    }

    ctx->pc = 0x256380u;

    // 0x256380: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x256380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x256384: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x256384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x256388: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x256388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25638c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25638cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x256390: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x256390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x256394: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x256394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x256398: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x256398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25639c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2563a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2563a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2563a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2563a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2563a8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2563a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2563ac: 0xa3a50098  sb          $a1, 0x98($sp)
    ctx->pc = 0x2563acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 5));
    // 0x2563b0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2563b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2563b4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2563b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2563b8: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x2563b8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2563bc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2563bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2563c0: 0x8c710034  lw          $s1, 0x34($v1)
    ctx->pc = 0x2563c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2563c4: 0x0  nop
    ctx->pc = 0x2563c4u;
    // NOP
label_2563c8:
    // 0x2563c8: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x2563c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2563cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2563ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2563d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2563d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2563d4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2563d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2563d8: 0x8c760028  lw          $s6, 0x28($v1)
    ctx->pc = 0x2563d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2563dc: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x2563dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2563e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2563e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2563e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2563e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2563e8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2563e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2563ec: 0x8c720030  lw          $s2, 0x30($v1)
    ctx->pc = 0x2563ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2563f0: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x2563f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2563f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2563f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2563f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2563f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2563fc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2563fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x256400: 0x8c730038  lw          $s3, 0x38($v1)
    ctx->pc = 0x256400u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x256404: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x256404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x256408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x256408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25640c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25640cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x256410: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x256410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x256414: 0x8c740040  lw          $s4, 0x40($v1)
    ctx->pc = 0x256414u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x256418: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x256418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x25641c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25641cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x256420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x256420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x256424: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x256424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x256428: 0x8c750048  lw          $s5, 0x48($v1)
    ctx->pc = 0x256428u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x25642c: 0x8e370010  lw          $s7, 0x10($s1)
    ctx->pc = 0x25642cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x256430: 0x93a30098  lbu         $v1, 0x98($sp)
    ctx->pc = 0x256430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x256434: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x256434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x256438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x256438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25643c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x25643cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x256440: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x256440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x256444: 0x0  nop
    ctx->pc = 0x256444u;
    // NOP
label_256448:
    // 0x256448: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x256448u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25644c: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x25644cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x256450: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x256450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x256454: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x256454u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x256458: 0xae160044  sw          $s6, 0x44($s0)
    ctx->pc = 0x256458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 22));
    // 0x25645c: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x25645cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x256460: 0xae130064  sw          $s3, 0x64($s0)
    ctx->pc = 0x256460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 19));
    // 0x256464: 0xae140074  sw          $s4, 0x74($s0)
    ctx->pc = 0x256464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 20));
    // 0x256468: 0xae150084  sw          $s5, 0x84($s0)
    ctx->pc = 0x256468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 21));
    // 0x25646c: 0x26d60240  addiu       $s6, $s6, 0x240
    ctx->pc = 0x25646cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 576));
    // 0x256470: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x256470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x256474: 0x267300c0  addiu       $s3, $s3, 0xC0
    ctx->pc = 0x256474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x256478: 0x269400c0  addiu       $s4, $s4, 0xC0
    ctx->pc = 0x256478u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x25647c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x25647cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x256480: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x256480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x256484: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x256484u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x256488: 0x16e0ffef  bnez        $s7, . + 4 + (-0x11 << 2)
    ctx->pc = 0x256488u;
    {
        const bool branch_taken_0x256488 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x256488) {
            ctx->pc = 0x256448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256448;
        }
    }
    ctx->pc = 0x256490u;
    // 0x256490: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x256490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x256494: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x256494u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x256498: 0x1fc0ffcb  bgtz        $fp, . + 4 + (-0x35 << 2)
    ctx->pc = 0x256498u;
    {
        const bool branch_taken_0x256498 = (GPR_S32(ctx, 30) > 0);
        if (branch_taken_0x256498) {
            ctx->pc = 0x2563C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2563c8;
        }
    }
    ctx->pc = 0x2564A0u;
    // 0x2564a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2564a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2564a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2564a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2564a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2564a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2564ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2564acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2564b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2564b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2564b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2564b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2564b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2564b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2564bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2564bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2564c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2564c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2564c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2564c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2564c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2564C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2564C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2564D0u;
}
