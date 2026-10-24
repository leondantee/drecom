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

// Function: e2d_id04_type28
// Address: 0x2ae4f0 - 0x2ae6b0
void e2d_id04_type28_0x2ae4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type28_0x2ae4f0");
#endif

    switch (ctx->pc) {
        case 0x2ae620u: goto label_2ae620;
        case 0x2ae650u: goto label_2ae650;
        default: break;
    }

    ctx->pc = 0x2ae4f0u;

    // 0x2ae4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae4f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ae4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ae4f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ae4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ae4fc: 0x3c02434e  lui         $v0, 0x434E
    ctx->pc = 0x2ae4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17230 << 16));
    // 0x2ae500: 0x3442b333  ori         $v0, $v0, 0xB333
    ctx->pc = 0x2ae500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45875);
    // 0x2ae504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae508: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae50c: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ae50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ae510: 0x3c024323  lui         $v0, 0x4323
    ctx->pc = 0x2ae510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17187 << 16));
    // 0x2ae514: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x2ae514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x2ae518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae51c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae520: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ae520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ae524: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x2ae524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x2ae528: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ae528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ae52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae530: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae534: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ae534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ae538: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ae538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ae53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae544: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ae544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ae548: 0x3c023f5c  lui         $v0, 0x3F5C
    ctx->pc = 0x2ae548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16220 << 16));
    // 0x2ae54c: 0x344228f6  ori         $v0, $v0, 0x28F6
    ctx->pc = 0x2ae54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10486);
    // 0x2ae550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae558: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ae558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ae55c: 0x3c02c25c  lui         $v0, 0xC25C
    ctx->pc = 0x2ae55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49756 << 16));
    // 0x2ae560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae564: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae568: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2ae568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2ae56c: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x2ae56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x2ae570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae574: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae578: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2ae578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2ae57c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae580: 0x3c023ee4  lui         $v0, 0x3EE4
    ctx->pc = 0x2ae580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16100 << 16));
    // 0x2ae584: 0x3442dd2f  ori         $v0, $v0, 0xDD2F
    ctx->pc = 0x2ae584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56623);
    // 0x2ae588: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ae588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae58c: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x2ae58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae590: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ae590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ae594: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae598: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2ae598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2ae59c: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2ae59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2ae5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae5a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae5a8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2ae5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2ae5ac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ae5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ae5b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae5b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae5b8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2ae5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2ae5bc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ae5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ae5c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae5c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae5c8: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2ae5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2ae5cc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ae5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ae5d0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ae5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ae5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae5d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae5dc: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2ae5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2ae5e0: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ae5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ae5e4: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ae5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ae5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae5ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae5f0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2ae5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2ae5f4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ae5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ae5f8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ae5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ae5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae600: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae604: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2ae604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2ae608: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2ae608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2ae60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae610: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae614: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2ae614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2ae618: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AE618u;
    SET_GPR_U32(ctx, 31, 0x2AE620u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AE618u, 0x2AE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE620u;
label_2ae620:
    // 0x2ae620: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ae620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ae624: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ae624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae628: 0x0  nop
    ctx->pc = 0x2ae628u;
    // NOP
    // 0x2ae62c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ae62cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ae630: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ae630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ae634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae638: 0x0  nop
    ctx->pc = 0x2ae638u;
    // NOP
    // 0x2ae63c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae63cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ae640: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae644: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2ae644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2ae648: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AE648u;
    SET_GPR_U32(ctx, 31, 0x2AE650u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AE648u, 0x2AE650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE650u;
label_2ae650:
    // 0x2ae650: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2ae650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2ae654: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2ae654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2ae658: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ae658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae65c: 0x0  nop
    ctx->pc = 0x2ae65cu;
    // NOP
    // 0x2ae660: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ae660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ae664: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2ae664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2ae668: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ae668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ae66c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae66cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae670: 0x0  nop
    ctx->pc = 0x2ae670u;
    // NOP
    // 0x2ae674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ae678: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae67c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ae67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ae680: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae684: 0xa060013a  sb          $zero, 0x13A($v1)
    ctx->pc = 0x2ae684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae688: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ae688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae68c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae690: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2ae690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae694: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ae694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae698: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae69c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ae69cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae6a0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ae6a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae6a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ae6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ae6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE6B0u;
}
