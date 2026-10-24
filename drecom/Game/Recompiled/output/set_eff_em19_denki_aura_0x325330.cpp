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

// Function: set_eff_em19_denki_aura
// Address: 0x325330 - 0x325a4c
void set_eff_em19_denki_aura_0x325330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em19_denki_aura_0x325330");
#endif

    switch (ctx->pc) {
        case 0x325450u: goto label_325450;
        case 0x32546cu: goto label_32546c;
        case 0x325488u: goto label_325488;
        case 0x325518u: goto label_325518;
        case 0x325534u: goto label_325534;
        case 0x325650u: goto label_325650;
        case 0x325660u: goto label_325660;
        case 0x32567cu: goto label_32567c;
        case 0x3256fcu: goto label_3256fc;
        case 0x325730u: goto label_325730;
        case 0x3257dcu: goto label_3257dc;
        case 0x3257ecu: goto label_3257ec;
        case 0x325820u: goto label_325820;
        case 0x3258ccu: goto label_3258cc;
        case 0x32594cu: goto label_32594c;
        case 0x325968u: goto label_325968;
        case 0x325984u: goto label_325984;
        case 0x3259a0u: goto label_3259a0;
        case 0x325a38u: goto label_325a38;
        default: break;
    }

    ctx->pc = 0x325330u;

    // 0x325330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x325330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x325334: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x325334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x325338: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x325338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32533c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x32533cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x325340: 0xa3a50078  sb          $a1, 0x78($sp)
    ctx->pc = 0x325340u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 5));
    // 0x325344: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x325344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x325348: 0x2463a1b0  addiu       $v1, $v1, -0x5E50
    ctx->pc = 0x325348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943152));
    // 0x32534c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x32534cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x325350: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x325350u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x39A1B0u));
    // 0x325354: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x325354u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x325358: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x325358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32535c: 0x2463a1c0  addiu       $v1, $v1, -0x5E40
    ctx->pc = 0x32535cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943168));
    // 0x325360: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x325360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x325364: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x325364u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x39A1C0u));
    // 0x325368: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x325368u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x32536c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32536cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x325370: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x325370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x325374: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x325374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x325378: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x325378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32537c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x325380: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x325380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x325384: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x325384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x325388: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x325388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32538c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x32538cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x325390: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x325390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x325394: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x325394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x325398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x325398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32539c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x32539cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3253a0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3253a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3253a4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3253a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3253a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3253a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3253ac: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x3253acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3253b0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3253b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3253b4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3253b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3253b8: 0x93a30078  lbu         $v1, 0x78($sp)
    ctx->pc = 0x3253b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3253bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3253bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3253c0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3253c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3253c4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x3253c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x3253c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3253c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3253cc: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x3253ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x3253d0: 0x0  nop
    ctx->pc = 0x3253d0u;
    // NOP
    // 0x3253d4: 0x0  nop
    ctx->pc = 0x3253d4u;
    // NOP
    // 0x3253d8: 0x1810  mfhi        $v1
    ctx->pc = 0x3253d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3253dc: 0x1460013b  bnez        $v1, . + 4 + (0x13B << 2)
    ctx->pc = 0x3253DCu;
    {
        const bool branch_taken_0x3253dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3253dc) {
            ctx->pc = 0x3258CCu;
            goto label_3258cc;
        }
    }
    ctx->pc = 0x3253E4u;
    // 0x3253e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3253e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3253e8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3253e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3253ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3253ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3253f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3253f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3253f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3253f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3253f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3253f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3253fc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x3253fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x325400: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x325400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x325404: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x325404u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x325408: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x325408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32540c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32540cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x325410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x325410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x325414: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x325414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x325418: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x325418u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x32541c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x32541cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x325420: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x325420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x325424: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x325424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x325428: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x325428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32542c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x32542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x325430: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x325430u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x325434: 0x0  nop
    ctx->pc = 0x325434u;
    // NOP
    // 0x325438: 0x0  nop
    ctx->pc = 0x325438u;
    // NOP
    // 0x32543c: 0x1810  mfhi        $v1
    ctx->pc = 0x32543cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x325440: 0x14600122  bnez        $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x325440u;
    {
        const bool branch_taken_0x325440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325440) {
            ctx->pc = 0x3258CCu;
            goto label_3258cc;
        }
    }
    ctx->pc = 0x325448u;
    // 0x325448: 0xc067648  jal         func_19D920
    ctx->pc = 0x325448u;
    SET_GPR_U32(ctx, 31, 0x325450u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325448u, 0x325450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325450u;
label_325450:
    // 0x325450: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x325450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x325454: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325458: 0x0  nop
    ctx->pc = 0x325458u;
    // NOP
    // 0x32545c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32545cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325460: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x325460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x325464: 0xc067648  jal         func_19D920
    ctx->pc = 0x325464u;
    SET_GPR_U32(ctx, 31, 0x32546Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325464u, 0x32546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32546Cu;
label_32546c:
    // 0x32546c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x32546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x325470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325474: 0x0  nop
    ctx->pc = 0x325474u;
    // NOP
    // 0x325478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32547c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x32547cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x325480: 0xc067648  jal         func_19D920
    ctx->pc = 0x325480u;
    SET_GPR_U32(ctx, 31, 0x325488u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325480u, 0x325488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325488u;
label_325488:
    // 0x325488: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x325488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x32548c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32548cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325490: 0x0  nop
    ctx->pc = 0x325490u;
    // NOP
    // 0x325494: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325498: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x325498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x32549c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32549cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3254a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3254a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3254a4: 0x0  nop
    ctx->pc = 0x3254a4u;
    // NOP
    // 0x3254a8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3254a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3254ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3254acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3254b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3254b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3254b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3254b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3254b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3254b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3254bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3254bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3254c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3254c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3254c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3254c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3254c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3254c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3254cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3254ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3254d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3254d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3254d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3254d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3254d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3254d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3254dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3254dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3254e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3254e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3254e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3254e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3254e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3254e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3254ec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3254ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3254f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3254f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3254f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3254f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3254f8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3254f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3254fc: 0x0  nop
    ctx->pc = 0x3254fcu;
    // NOP
    // 0x325500: 0x0  nop
    ctx->pc = 0x325500u;
    // NOP
    // 0x325504: 0x1010  mfhi        $v0
    ctx->pc = 0x325504u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x325508: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x325508u;
    {
        const bool branch_taken_0x325508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325508) {
            ctx->pc = 0x325658u;
            goto label_325658;
        }
    }
    ctx->pc = 0x325510u;
    // 0x325510: 0xc067654  jal         func_19D950
    ctx->pc = 0x325510u;
    SET_GPR_U32(ctx, 31, 0x325518u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x325510u, 0x325518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325518u;
label_325518:
    // 0x325518: 0x3c02c3aa  lui         $v0, 0xC3AA
    ctx->pc = 0x325518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50090 << 16));
    // 0x32551c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32551cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325520: 0x0  nop
    ctx->pc = 0x325520u;
    // NOP
    // 0x325524: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325528: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x325528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x32552c: 0xc067648  jal         func_19D920
    ctx->pc = 0x32552Cu;
    SET_GPR_U32(ctx, 31, 0x325534u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x32552Cu, 0x325534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325534u;
label_325534:
    // 0x325534: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x325534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x325538: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32553c: 0x0  nop
    ctx->pc = 0x32553cu;
    // NOP
    // 0x325540: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x325540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325544: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x325544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x325548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32554c: 0x0  nop
    ctx->pc = 0x32554cu;
    // NOP
    // 0x325550: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x325550u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x325554: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x325554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x325558: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x325558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x32555c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32555cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325560: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x325560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x325564: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325564u;
    {
        const bool branch_taken_0x325564 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x325564) {
            ctx->pc = 0x325580u;
            goto label_325580;
        }
    }
    ctx->pc = 0x32556Cu;
    // 0x32556c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32556cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325570: 0x0  nop
    ctx->pc = 0x325570u;
    // NOP
    // 0x325574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325578: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325578u;
    {
        const bool branch_taken_0x325578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325578) {
            ctx->pc = 0x32559Cu;
            goto label_32559c;
        }
    }
    ctx->pc = 0x325580u;
label_325580:
    // 0x325580: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x325580u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x325584: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x325584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x325588: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x325588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32558c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32558cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325590: 0x0  nop
    ctx->pc = 0x325590u;
    // NOP
    // 0x325594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325598: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x325598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_32559c:
    // 0x32559c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32559cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3255a0: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x3255a0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3255a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3255a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3255a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3255a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3255ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3255acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3255b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3255b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3255b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3255b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3255b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3255b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3255bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3255bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3255c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3255c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3255c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3255c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3255c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3255c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3255cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3255ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3255d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3255d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3255d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3255d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3255d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3255d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3255dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3255dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3255e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3255e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3255e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3255e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3255e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3255e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3255ec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3255ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3255f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3255f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3255f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3255f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3255f8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3255f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3255fc: 0x0  nop
    ctx->pc = 0x3255fcu;
    // NOP
    // 0x325600: 0x0  nop
    ctx->pc = 0x325600u;
    // NOP
    // 0x325604: 0x1810  mfhi        $v1
    ctx->pc = 0x325604u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x325608: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x325608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32560c: 0x2442a1d0  addiu       $v0, $v0, -0x5E30
    ctx->pc = 0x32560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x325610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x325610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x325614: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x325614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325618: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x325618u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32561c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x32561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x325620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x325620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x325624: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x325624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x325628: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x325628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x32562c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x32562cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x325630: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x325630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325634: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x325634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x325638: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x325638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32563c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x32563cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x325640: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x325640u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x325644: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x325644u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x325648: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x325648u;
    SET_GPR_U32(ctx, 31, 0x325650u);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x325648u, 0x325650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325650u;
label_325650:
    // 0x325650: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x325650u;
    {
        const bool branch_taken_0x325650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325650) {
            ctx->pc = 0x3258CCu;
            goto label_3258cc;
        }
    }
    ctx->pc = 0x325658u;
label_325658:
    // 0x325658: 0xc067654  jal         func_19D950
    ctx->pc = 0x325658u;
    SET_GPR_U32(ctx, 31, 0x325660u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x325658u, 0x325660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325660u;
label_325660:
    // 0x325660: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x325660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x325664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325668: 0x0  nop
    ctx->pc = 0x325668u;
    // NOP
    // 0x32566c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32566cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325670: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x325670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x325674: 0xc067648  jal         func_19D920
    ctx->pc = 0x325674u;
    SET_GPR_U32(ctx, 31, 0x32567Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325674u, 0x32567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32567Cu;
label_32567c:
    // 0x32567c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x32567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x325680: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325684: 0x0  nop
    ctx->pc = 0x325684u;
    // NOP
    // 0x325688: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32568c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x32568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x325690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x325690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x325694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325698: 0x0  nop
    ctx->pc = 0x325698u;
    // NOP
    // 0x32569c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x32569cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3256a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3256a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3256a4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3256a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3256a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3256a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3256ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3256acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3256b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3256b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3256b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3256b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3256b8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3256b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3256bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3256bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3256c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3256c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3256c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3256c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3256c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3256c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3256cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3256ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3256d0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3256d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3256d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3256d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3256d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3256d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3256dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3256dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3256e0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3256e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3256e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3256e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3256e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3256e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3256ec: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3256ECu;
    {
        const bool branch_taken_0x3256ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3256ec) {
            ctx->pc = 0x3257E4u;
            goto label_3257e4;
        }
    }
    ctx->pc = 0x3256F4u;
    // 0x3256f4: 0xc067654  jal         func_19D950
    ctx->pc = 0x3256F4u;
    SET_GPR_U32(ctx, 31, 0x3256FCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x3256F4u, 0x3256FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3256FCu;
label_3256fc:
    // 0x3256fc: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x3256fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x325700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325704: 0x0  nop
    ctx->pc = 0x325704u;
    // NOP
    // 0x325708: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x325708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32570c: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x32570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x325710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325714: 0x0  nop
    ctx->pc = 0x325714u;
    // NOP
    // 0x325718: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x325718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32571c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x32571cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x325720: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x325720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x325724: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x325724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x325728: 0xc067648  jal         func_19D920
    ctx->pc = 0x325728u;
    SET_GPR_U32(ctx, 31, 0x325730u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325728u, 0x325730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325730u;
label_325730:
    // 0x325730: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x325730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x325734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325738: 0x0  nop
    ctx->pc = 0x325738u;
    // NOP
    // 0x32573c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32573cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325740: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x325740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x325744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325748: 0x0  nop
    ctx->pc = 0x325748u;
    // NOP
    // 0x32574c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x32574cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x325750: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x325750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x325754: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x325754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x325758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32575c: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x32575cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x325760: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325760u;
    {
        const bool branch_taken_0x325760 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x325760) {
            ctx->pc = 0x32577Cu;
            goto label_32577c;
        }
    }
    ctx->pc = 0x325768u;
    // 0x325768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32576c: 0x0  nop
    ctx->pc = 0x32576cu;
    // NOP
    // 0x325770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325774: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325774u;
    {
        const bool branch_taken_0x325774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325774) {
            ctx->pc = 0x325798u;
            goto label_325798;
        }
    }
    ctx->pc = 0x32577Cu;
label_32577c:
    // 0x32577c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32577cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x325780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x325780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x325784: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x325784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x325788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32578c: 0x0  nop
    ctx->pc = 0x32578cu;
    // NOP
    // 0x325790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325794: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x325794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_325798:
    // 0x325798: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32579c: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x32579cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3257a0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3257a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3257a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3257a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3257a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3257a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3257ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3257acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3257b0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x3257b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3257b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3257b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3257b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3257b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3257bc: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x3257bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3257c0: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x3257c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3257c4: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x3257c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3257c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3257c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3257cc: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3257ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3257d0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x3257d0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3257d4: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x3257D4u;
    SET_GPR_U32(ctx, 31, 0x3257DCu);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x3257D4u, 0x3257DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257DCu;
label_3257dc:
    // 0x3257dc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3257DCu;
    {
        const bool branch_taken_0x3257dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3257dc) {
            ctx->pc = 0x3258CCu;
            goto label_3258cc;
        }
    }
    ctx->pc = 0x3257E4u;
label_3257e4:
    // 0x3257e4: 0xc067654  jal         func_19D950
    ctx->pc = 0x3257E4u;
    SET_GPR_U32(ctx, 31, 0x3257ECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x3257E4u, 0x3257ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257ECu;
label_3257ec:
    // 0x3257ec: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x3257ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x3257f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3257f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3257f4: 0x0  nop
    ctx->pc = 0x3257f4u;
    // NOP
    // 0x3257f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3257f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3257fc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3257fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x325800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325804: 0x0  nop
    ctx->pc = 0x325804u;
    // NOP
    // 0x325808: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x325808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32580c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x32580cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x325810: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x325810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x325814: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x325814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x325818: 0xc067648  jal         func_19D920
    ctx->pc = 0x325818u;
    SET_GPR_U32(ctx, 31, 0x325820u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325818u, 0x325820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325820u;
label_325820:
    // 0x325820: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x325820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x325824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325828: 0x0  nop
    ctx->pc = 0x325828u;
    // NOP
    // 0x32582c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32582cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325830: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x325830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x325834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325838: 0x0  nop
    ctx->pc = 0x325838u;
    // NOP
    // 0x32583c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x32583cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x325840: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x325840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x325844: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x325844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x325848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32584c: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x32584cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x325850: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325850u;
    {
        const bool branch_taken_0x325850 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x325850) {
            ctx->pc = 0x32586Cu;
            goto label_32586c;
        }
    }
    ctx->pc = 0x325858u;
    // 0x325858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32585c: 0x0  nop
    ctx->pc = 0x32585cu;
    // NOP
    // 0x325860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325864u;
    {
        const bool branch_taken_0x325864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325864) {
            ctx->pc = 0x325888u;
            goto label_325888;
        }
    }
    ctx->pc = 0x32586Cu;
label_32586c:
    // 0x32586c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32586cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x325870: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x325870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x325874: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x325874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x325878: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32587c: 0x0  nop
    ctx->pc = 0x32587cu;
    // NOP
    // 0x325880: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325884: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x325884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_325888:
    // 0x325888: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32588c: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x32588cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x325890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325894: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x325894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x325898: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x325898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x32589c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x32589cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3258a0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x3258a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3258a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3258a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3258a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3258a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3258ac: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x3258acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3258b0: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x3258b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3258b4: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x3258b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3258b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3258b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3258bc: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3258bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3258c0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x3258c0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3258c4: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x3258C4u;
    SET_GPR_U32(ctx, 31, 0x3258CCu);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x3258C4u, 0x3258CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3258CCu;
label_3258cc:
    // 0x3258cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3258ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3258d0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3258d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3258d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3258d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3258d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3258d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3258dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3258dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3258e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3258e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3258e4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x3258e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3258e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3258e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3258ec: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3258ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3258f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3258f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3258f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3258f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3258f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3258f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3258fc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3258fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x325900: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x325900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x325904: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x325904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x325908: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x325908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32590c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x32590cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x325910: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x325910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x325914: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x325914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x325918: 0x93a30078  lbu         $v1, 0x78($sp)
    ctx->pc = 0x325918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x32591c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32591cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x325920: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x325920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x325924: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x325924u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x325928: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x325928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x32592c: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x32592cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x325930: 0x0  nop
    ctx->pc = 0x325930u;
    // NOP
    // 0x325934: 0x0  nop
    ctx->pc = 0x325934u;
    // NOP
    // 0x325938: 0x1810  mfhi        $v1
    ctx->pc = 0x325938u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32593c: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x32593Cu;
    {
        const bool branch_taken_0x32593c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32593c) {
            ctx->pc = 0x325A38u;
            goto label_325a38;
        }
    }
    ctx->pc = 0x325944u;
    // 0x325944: 0xc067648  jal         func_19D920
    ctx->pc = 0x325944u;
    SET_GPR_U32(ctx, 31, 0x32594Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325944u, 0x32594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32594Cu;
label_32594c:
    // 0x32594c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x32594cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x325950: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325954: 0x0  nop
    ctx->pc = 0x325954u;
    // NOP
    // 0x325958: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32595c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x32595cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x325960: 0xc067648  jal         func_19D920
    ctx->pc = 0x325960u;
    SET_GPR_U32(ctx, 31, 0x325968u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325960u, 0x325968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325968u;
label_325968:
    // 0x325968: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x325968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x32596c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32596cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325970: 0x0  nop
    ctx->pc = 0x325970u;
    // NOP
    // 0x325974: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325978: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x325978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x32597c: 0xc067648  jal         func_19D920
    ctx->pc = 0x32597Cu;
    SET_GPR_U32(ctx, 31, 0x325984u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x32597Cu, 0x325984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325984u;
label_325984:
    // 0x325984: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x325984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x325988: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32598c: 0x0  nop
    ctx->pc = 0x32598cu;
    // NOP
    // 0x325990: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325994: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x325994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x325998: 0xc067648  jal         func_19D920
    ctx->pc = 0x325998u;
    SET_GPR_U32(ctx, 31, 0x3259A0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325998u, 0x3259A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259A0u;
label_3259a0:
    // 0x3259a0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3259a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3259a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3259a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3259a8: 0x0  nop
    ctx->pc = 0x3259a8u;
    // NOP
    // 0x3259ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3259acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3259b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3259b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3259b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3259b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3259b8: 0x0  nop
    ctx->pc = 0x3259b8u;
    // NOP
    // 0x3259bc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3259bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3259c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3259c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3259c4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3259c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3259c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3259c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3259cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3259ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3259d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3259d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3259d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3259d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3259d8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3259d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3259dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3259dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3259e0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3259e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3259e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3259e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3259e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3259e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3259ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3259ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3259f0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3259f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3259f4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3259f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3259f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3259f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3259fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3259fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x325a00: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x325a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x325a04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x325a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325a08: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x325a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x325a0c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x325a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x325a10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x325a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x325a14: 0x2442a1d8  addiu       $v0, $v0, -0x5E28
    ctx->pc = 0x325a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943192));
    // 0x325a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x325a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x325a1c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x325a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325a20: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x325a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325a24: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x325a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x325a28: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x325a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x325a2c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x325a2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x325a30: 0xc0861dc  jal         func_218770
    ctx->pc = 0x325A30u;
    SET_GPR_U32(ctx, 31, 0x325A38u);
    ctx->pc = 0x218770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218770u, 0x325A30u, 0x325A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A38u;
label_325a38:
    // 0x325a38: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x325a38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325a3c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x325a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x325a40: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x325a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x325a44: 0x3e00008  jr          $ra
    ctx->pc = 0x325A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325A4Cu;
}
