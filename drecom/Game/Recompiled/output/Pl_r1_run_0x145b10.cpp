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

// Function: Pl_r1_run
// Address: 0x145b10 - 0x145ff4
void Pl_r1_run_0x145b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_run_0x145b10");
#endif

    switch (ctx->pc) {
        case 0x145c08u: goto label_145c08;
        case 0x145c34u: goto label_145c34;
        case 0x145c58u: goto label_145c58;
        case 0x145c74u: goto label_145c74;
        case 0x145cb0u: goto label_145cb0;
        case 0x145cfcu: goto label_145cfc;
        case 0x145d78u: goto label_145d78;
        case 0x145dacu: goto label_145dac;
        case 0x145dc8u: goto label_145dc8;
        case 0x145de0u: goto label_145de0;
        case 0x145df8u: goto label_145df8;
        case 0x145e04u: goto label_145e04;
        case 0x145e14u: goto label_145e14;
        case 0x145e2cu: goto label_145e2c;
        case 0x145e3cu: goto label_145e3c;
        case 0x145e4cu: goto label_145e4c;
        case 0x145e60u: goto label_145e60;
        case 0x145e70u: goto label_145e70;
        case 0x145e80u: goto label_145e80;
        case 0x145e90u: goto label_145e90;
        default: break;
    }

    ctx->pc = 0x145b10u;

    // 0x145b10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x145b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x145b14: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x145b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x145b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145b20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145b24: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x145b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x145b28: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x145b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x145b2c: 0x24720080  addiu       $s2, $v1, 0x80
    ctx->pc = 0x145b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x145b30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x145b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x145b34: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x145b34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x145b38: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x145b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x145b3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x145b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x145b40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x145b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x145b44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x145b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x145b48: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x145b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x145b4c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145b50: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x145b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x145b54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x145b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x145b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145b5c: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x145B5Cu;
    {
        const bool branch_taken_0x145b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x145b5c) {
            ctx->pc = 0x145CA0u;
            goto label_145ca0;
        }
    }
    ctx->pc = 0x145B64u;
    // 0x145b64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145B64u;
    {
        const bool branch_taken_0x145b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x145b64) {
            ctx->pc = 0x145B74u;
            goto label_145b74;
        }
    }
    ctx->pc = 0x145B6Cu;
    // 0x145b6c: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x145B6Cu;
    {
        const bool branch_taken_0x145b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145b6c) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145B74u;
label_145b74:
    // 0x145b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145b78: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x145b78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145b7c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145b80: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x145b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145b84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x145b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145b88: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x145b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145b8c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x145b8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145b90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145b94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145b98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x145b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x145b9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145ba0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x145BA0u;
    {
        const bool branch_taken_0x145ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ba0) {
            ctx->pc = 0x145BC0u;
            goto label_145bc0;
        }
    }
    ctx->pc = 0x145BA8u;
    // 0x145ba8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145bac: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x145bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145bb0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145bb4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x145bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x145bb8: 0x36020010  ori         $v0, $s0, 0x10
    ctx->pc = 0x145bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x145bbc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x145bbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_145bc0:
    // 0x145bc0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145bc4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145bc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x145bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x145bcc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145bd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145BD0u;
    {
        const bool branch_taken_0x145bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145bd0) {
            ctx->pc = 0x145BE0u;
            goto label_145be0;
        }
    }
    ctx->pc = 0x145BD8u;
    // 0x145bd8: 0x36020020  ori         $v0, $s0, 0x20
    ctx->pc = 0x145bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x145bdc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x145bdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_145be0:
    // 0x145be0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145be4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145be8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x145be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x145bec: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x145becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x145bf0: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x145bf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x145bf4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x145bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x145bf8: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x145bf8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x145bfc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x145bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x145c00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x145C00u;
    SET_GPR_U32(ctx, 31, 0x145C08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x145C00u, 0x145C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C08u;
label_145c08:
    // 0x145c08: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145c10: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x145c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x145c14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145c18: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x145C18u;
    {
        const bool branch_taken_0x145c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145c18) {
            ctx->pc = 0x145C7Cu;
            goto label_145c7c;
        }
    }
    ctx->pc = 0x145C20u;
    // 0x145c20: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145c28: 0xc44c1b34  lwc1        $f12, 0x1B34($v0)
    ctx->pc = 0x145c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145c2c: 0xc067844  jal         func_19E110
    ctx->pc = 0x145C2Cu;
    SET_GPR_U32(ctx, 31, 0x145C34u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x145C2Cu, 0x145C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C34u;
label_145c34:
    // 0x145c34: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c38: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x145c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x145c3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c40: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x145c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x145c44: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x145c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x145c48: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x145c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x145c4c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145c50: 0xc040c00  jal         func_103000
    ctx->pc = 0x145C50u;
    SET_GPR_U32(ctx, 31, 0x145C58u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x145C58u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x145C58u) { return; }
    ctx->pc = 0x145C58u;
label_145c58:
    // 0x145c58: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c5c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x145c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145c60: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c64: 0xc4401b34  lwc1        $f0, 0x1B34($v0)
    ctx->pc = 0x145c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c68: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x145c68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x145c6c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x145C6Cu;
    SET_GPR_U32(ctx, 31, 0x145C74u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x145C6Cu, 0x145C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C74u;
label_145c74:
    // 0x145c74: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c78: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x145c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_145c7c:
    // 0x145c7c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c80: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x145c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x145c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145c88: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c8c: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x145c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x145c90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c94: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x145c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c9c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x145c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_145ca0:
    // 0x145ca0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ca4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x145ca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145ca8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x145CA8u;
    SET_GPR_U32(ctx, 31, 0x145CB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x145CA8u, 0x145CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145CB0u;
label_145cb0:
    // 0x145cb0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145cb4: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x145cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145cb8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x145cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x145cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145cc0: 0x0  nop
    ctx->pc = 0x145cc0u;
    // NOP
    // 0x145cc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145cc8: 0x0  nop
    ctx->pc = 0x145cc8u;
    // NOP
    // 0x145ccc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x145CCCu;
    {
        const bool branch_taken_0x145ccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145ccc) {
            ctx->pc = 0x145CE4u;
            goto label_145ce4;
        }
    }
    ctx->pc = 0x145CD4u;
    // 0x145cd4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145cd8: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x145cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145cdc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ce0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x145ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_145ce4:
    // 0x145ce4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ce8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145cec: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x145cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145cf0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x145cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145cf4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x145CF4u;
    SET_GPR_U32(ctx, 31, 0x145CFCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x145CF4u, 0x145CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145CFCu;
label_145cfc:
    // 0x145cfc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x145cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x145d00: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x145d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145d04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d08: 0x0  nop
    ctx->pc = 0x145d08u;
    // NOP
    // 0x145d0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d10: 0x0  nop
    ctx->pc = 0x145d10u;
    // NOP
    // 0x145d14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x145D14u;
    {
        const bool branch_taken_0x145d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145d14) {
            ctx->pc = 0x145D30u;
            goto label_145d30;
        }
    }
    ctx->pc = 0x145D1Cu;
    // 0x145d1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x145d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x145d20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145d24: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x145d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145d2c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x145d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_145d30:
    // 0x145d30: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x145d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145d34: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x145d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x145d38: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x145d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x145d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d40: 0x0  nop
    ctx->pc = 0x145d40u;
    // NOP
    // 0x145d44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d48: 0x0  nop
    ctx->pc = 0x145d48u;
    // NOP
    // 0x145d4c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x145D4Cu;
    {
        const bool branch_taken_0x145d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145d4c) {
            ctx->pc = 0x145D88u;
            goto label_145d88;
        }
    }
    ctx->pc = 0x145D54u;
    // 0x145d54: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145d58: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145d5c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x145d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x145d60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x145d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x145d64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x145d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x145d68: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x145d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145d6c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x145d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145d70: 0xc058f50  jal         func_163D40
    ctx->pc = 0x145D70u;
    SET_GPR_U32(ctx, 31, 0x145D78u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x145D70u, 0x145D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D78u;
label_145d78:
    // 0x145d78: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145d7c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x145d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x145d80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x145D80u;
    {
        const bool branch_taken_0x145d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145d80) {
            ctx->pc = 0x145DB4u;
            goto label_145db4;
        }
    }
    ctx->pc = 0x145D88u;
label_145d88:
    // 0x145d88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145d8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145d90: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x145d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x145d94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x145d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x145d98: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x145d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x145d9c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x145d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145da0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x145da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145da4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x145DA4u;
    SET_GPR_U32(ctx, 31, 0x145DACu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x145DA4u, 0x145DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DACu;
label_145dac:
    // 0x145dac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145db0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x145db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_145db4:
    // 0x145db4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145db8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145dbc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x145dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145dc0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x145DC0u;
    SET_GPR_U32(ctx, 31, 0x145DC8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x145DC0u, 0x145DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DC8u;
label_145dc8:
    // 0x145dc8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145dcc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145dd0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x145dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145dd4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x145dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145dd8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x145DD8u;
    SET_GPR_U32(ctx, 31, 0x145DE0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x145DD8u, 0x145DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DE0u;
label_145de0:
    // 0x145de0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x145de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x145de4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145de8: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x145de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145dec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x145decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145df0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x145DF0u;
    SET_GPR_U32(ctx, 31, 0x145DF8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x145DF0u, 0x145DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DF8u;
label_145df8:
    // 0x145df8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x145df8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145dfc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x145DFCu;
    SET_GPR_U32(ctx, 31, 0x145E04u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x145DFCu, 0x145E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E04u;
label_145e04:
    // 0x145e04: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145e08: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x145e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x145e0c: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x145E0Cu;
    SET_GPR_U32(ctx, 31, 0x145E14u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x145E0Cu, 0x145E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E14u;
label_145e14:
    // 0x145e14: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x145E14u;
    {
        const bool branch_taken_0x145e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e14) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145E1Cu;
    // 0x145e1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145e20: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x145e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x145e24: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x145E24u;
    SET_GPR_U32(ctx, 31, 0x145E2Cu);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x145E24u, 0x145E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E2Cu;
label_145e2c:
    // 0x145e2c: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x145E2Cu;
    {
        const bool branch_taken_0x145e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e2c) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145E34u;
    // 0x145e34: 0xc058410  jal         func_161040
    ctx->pc = 0x145E34u;
    SET_GPR_U32(ctx, 31, 0x145E3Cu);
    ctx->pc = 0x161040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161040u, 0x145E34u, 0x145E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E3Cu;
label_145e3c:
    // 0x145e3c: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x145E3Cu;
    {
        const bool branch_taken_0x145e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e3c) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145E44u;
    // 0x145e44: 0xc057b78  jal         func_15EDE0
    ctx->pc = 0x145E44u;
    SET_GPR_U32(ctx, 31, 0x145E4Cu);
    ctx->pc = 0x15EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EDE0u, 0x145E44u, 0x145E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E4Cu;
label_145e4c:
    // 0x145e4c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x145E4Cu;
    {
        const bool branch_taken_0x145e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e4c) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145E54u;
    // 0x145e54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145e58: 0xc057cd8  jal         func_15F360
    ctx->pc = 0x145E58u;
    SET_GPR_U32(ctx, 31, 0x145E60u);
    ctx->pc = 0x15F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F360u, 0x145E58u, 0x145E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E60u;
label_145e60:
    // 0x145e60: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x145E60u;
    {
        const bool branch_taken_0x145e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e60) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145E68u;
    // 0x145e68: 0xc0581a8  jal         func_1606A0
    ctx->pc = 0x145E68u;
    SET_GPR_U32(ctx, 31, 0x145E70u);
    ctx->pc = 0x1606A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606A0u, 0x145E68u, 0x145E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E70u;
label_145e70:
    // 0x145e70: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x145E70u;
    {
        const bool branch_taken_0x145e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e70) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145E78u;
    // 0x145e78: 0xc057efc  jal         func_15FBF0
    ctx->pc = 0x145E78u;
    SET_GPR_U32(ctx, 31, 0x145E80u);
    ctx->pc = 0x15FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBF0u, 0x145E78u, 0x145E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E80u;
label_145e80:
    // 0x145e80: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x145E80u;
    {
        const bool branch_taken_0x145e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e80) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145E88u;
    // 0x145e88: 0xc058478  jal         func_1611E0
    ctx->pc = 0x145E88u;
    SET_GPR_U32(ctx, 31, 0x145E90u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x145E88u, 0x145E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E90u;
label_145e90:
    // 0x145e90: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x145E90u;
    {
        const bool branch_taken_0x145e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e90) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145E98u;
    // 0x145e98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145e9c: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145ea0: 0x3c0342d0  lui         $v1, 0x42D0
    ctx->pc = 0x145ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17104 << 16));
    // 0x145ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145ea8: 0x0  nop
    ctx->pc = 0x145ea8u;
    // NOP
    // 0x145eac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145eacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145eb0: 0x0  nop
    ctx->pc = 0x145eb0u;
    // NOP
    // 0x145eb4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x145EB4u;
    {
        const bool branch_taken_0x145eb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145eb4) {
            ctx->pc = 0x145EE0u;
            goto label_145ee0;
        }
    }
    ctx->pc = 0x145EBCu;
    // 0x145ebc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x145ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x145ec0: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x145ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B4u));
    // 0x145ec4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x145ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x145ec8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x145EC8u;
    {
        const bool branch_taken_0x145ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ec8) {
            ctx->pc = 0x145F48u;
            goto label_145f48;
        }
    }
    ctx->pc = 0x145ED0u;
    // 0x145ed0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ed4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x145ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x145ed8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x145ED8u;
    {
        const bool branch_taken_0x145ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ed8) {
            ctx->pc = 0x145F48u;
            goto label_145f48;
        }
    }
    ctx->pc = 0x145EE0u;
label_145ee0:
    // 0x145ee0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ee4: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145ee8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x145ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x145eec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145ef0: 0x0  nop
    ctx->pc = 0x145ef0u;
    // NOP
    // 0x145ef4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145ef8: 0x0  nop
    ctx->pc = 0x145ef8u;
    // NOP
    // 0x145efc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x145EFCu;
    {
        const bool branch_taken_0x145efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145efc) {
            ctx->pc = 0x145F48u;
            goto label_145f48;
        }
    }
    ctx->pc = 0x145F04u;
    // 0x145f04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145f08: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x145f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x145f10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145f14: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x145f18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x145f1c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x145f20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x145f24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x145f28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x145f2c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x145f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x145f34: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x145f38: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f3c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x145f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x145f40: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x145F40u;
    {
        const bool branch_taken_0x145f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145f40) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145F48u;
label_145f48:
    // 0x145f48: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f4c: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145f50: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x145f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x145f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145f58: 0x0  nop
    ctx->pc = 0x145f58u;
    // NOP
    // 0x145f5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145f60: 0x0  nop
    ctx->pc = 0x145f60u;
    // NOP
    // 0x145f64: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x145F64u;
    {
        const bool branch_taken_0x145f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145f64) {
            ctx->pc = 0x145FD0u;
            goto label_145fd0;
        }
    }
    ctx->pc = 0x145F6Cu;
    // 0x145f6c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f70: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x145f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x145f74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x145f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x145f78: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x145f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    // 0x145f7c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f80: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x145f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x145f84: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x145f84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x145f88: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x145F88u;
    {
        const bool branch_taken_0x145f88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x145f88) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145F90u;
    // 0x145f90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145f94: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x145f98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x145f9c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145fa0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x145fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x145fa4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145fa8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x145fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x145fac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145fb0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x145fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x145fb4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145fb8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x145fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x145fbc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x145fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x145fc0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145fc4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x145fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x145fc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145FC8u;
    {
        const bool branch_taken_0x145fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145fc8) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145FD0u;
label_145fd0:
    // 0x145fd0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145fd4: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x145fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_145fd8:
    // 0x145fd8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x145fd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145fdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145fe8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x145fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x145fec: 0x3e00008  jr          $ra
    ctx->pc = 0x145FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145FF4u;
}
