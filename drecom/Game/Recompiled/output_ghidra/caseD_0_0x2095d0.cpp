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

// Function: caseD_0
// Address: 0x2095d0 - 0x20970c
void caseD_0_0x2095d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2095d0");
#endif

    switch (ctx->pc) {
        case 0x209604u: goto label_209604;
        case 0x209660u: goto label_209660;
        default: break;
    }

    ctx->pc = 0x2095d0u;

    // 0x2095d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2095d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2095d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2095d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2095d8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2095d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2095dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2095dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2095e0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2095e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2095e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2095e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2095e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2095e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2095ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2095f0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x2095f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2095f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2095f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2095f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2095f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2095fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2095FCu;
    SET_GPR_U32(ctx, 31, 0x209604u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2095FCu, 0x209604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209604u;
label_209604:
    // 0x209604: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x209604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x209608: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x209608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x20960c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x20960cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x209610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209614: 0x0  nop
    ctx->pc = 0x209614u;
    // NOP
    // 0x209618: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x209618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x20961c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20961cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209620: 0x0  nop
    ctx->pc = 0x209620u;
    // NOP
    // 0x209624: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x209628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20962c: 0x0  nop
    ctx->pc = 0x20962cu;
    // NOP
    // 0x209630: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x209630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x209634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209638: 0x0  nop
    ctx->pc = 0x209638u;
    // NOP
    // 0x20963c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x20963cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x209640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209644: 0x0  nop
    ctx->pc = 0x209644u;
    // NOP
    // 0x209648: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x209648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x20964c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20964cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209650: 0x0  nop
    ctx->pc = 0x209650u;
    // NOP
    // 0x209654: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x209654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x209658: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x209658u;
    SET_GPR_U32(ctx, 31, 0x209660u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x209658u, 0x209660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209660u;
label_209660:
    // 0x209660: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x209660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x209664: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x209664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x209668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x209668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20966c: 0x0  nop
    ctx->pc = 0x20966cu;
    // NOP
    // 0x209670: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x209670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x209674: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209678: 0xe4209480  swc1        $f0, -0x6B80($at)
    ctx->pc = 0x209678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619480u, _value); } while (0); }
    // 0x20967c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209680: 0xc4219480  lwc1        $f1, -0x6B80($at)
    ctx->pc = 0x209680u;
    { uint32_t bits = FAST_READ32(0x619480u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209684: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x209684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x209688: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x209688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x20968c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20968cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209690: 0x0  nop
    ctx->pc = 0x209690u;
    // NOP
    // 0x209694: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209698: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20969c: 0xe4209480  swc1        $f0, -0x6B80($at)
    ctx->pc = 0x20969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619480u, _value); } while (0); }
    // 0x2096a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2096a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2096a4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2096a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2096a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2096a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2096ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2096acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2096b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2096b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2096b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2096b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2096b8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2096b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2096bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2096bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2096c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2096c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2096c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2096c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2096c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2096c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2096cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2096ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2096d0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2096d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2096d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2096d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2096d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2096d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2096dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2096dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2096e0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2096e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2096e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2096e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2096e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2096e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2096ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2096ECu;
    {
        const bool branch_taken_0x2096ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2096ec) {
            ctx->pc = 0x20970Cu;
            return;
        }
    }
    ctx->pc = 0x2096F4u;
    // 0x2096f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2096f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2096f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2096f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2096fc: 0x0  nop
    ctx->pc = 0x2096fcu;
    // NOP
    // 0x209700: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x209700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x209704: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x209704u;
    {
        const bool branch_taken_0x209704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209704) {
            ctx->pc = 0x20971Cu;
            return;
        }
    }
    ctx->pc = 0x20970Cu;
}
