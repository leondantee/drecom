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

// Function: ectrl1f_move10
// Address: 0x3000c0 - 0x3007d4
void ectrl1f_move10_0x3000c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1f_move10_0x3000c0");
#endif

    switch (ctx->pc) {
        case 0x300110u: goto label_300110;
        case 0x3001acu: goto label_3001ac;
        case 0x3001c8u: goto label_3001c8;
        case 0x3001fcu: goto label_3001fc;
        case 0x300228u: goto label_300228;
        case 0x300244u: goto label_300244;
        case 0x300274u: goto label_300274;
        case 0x30036cu: goto label_30036c;
        case 0x300378u: goto label_300378;
        case 0x3003e8u: goto label_3003e8;
        case 0x300414u: goto label_300414;
        case 0x300440u: goto label_300440;
        case 0x300470u: goto label_300470;
        case 0x30056cu: goto label_30056c;
        case 0x300578u: goto label_300578;
        case 0x3005a8u: goto label_3005a8;
        case 0x3005c4u: goto label_3005c4;
        case 0x3005f8u: goto label_3005f8;
        case 0x300624u: goto label_300624;
        case 0x300640u: goto label_300640;
        case 0x300670u: goto label_300670;
        case 0x300768u: goto label_300768;
        case 0x300774u: goto label_300774;
        case 0x3007acu: goto label_3007ac;
        case 0x3007b8u: goto label_3007b8;
        default: break;
    }

    ctx->pc = 0x3000c0u;

    // 0x3000c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3000c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3000c4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x3000c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x3000c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3000c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3000cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3000ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3000d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3000d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3000d4: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x3000d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x3000d8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3000d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3000dc: 0x24429220  addiu       $v0, $v0, -0x6DE0
    ctx->pc = 0x3000dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939168));
    // 0x3000e0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3000e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3000e4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3000e4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399220u));
    // 0x3000e8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3000e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3000ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3000ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3000f0: 0x24429230  addiu       $v0, $v0, -0x6DD0
    ctx->pc = 0x3000f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939184));
    // 0x3000f4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3000f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3000f8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3000f8u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x399230u));
    // 0x3000fc: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x3000fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x300100: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x300100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300104: 0x24c40060  addiu       $a0, $a2, 0x60
    ctx->pc = 0x300104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x300108: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x300108u;
    SET_GPR_U32(ctx, 31, 0x300110u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x300110u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x300110u) { return; }
    ctx->pc = 0x300110u;
label_300110:
    // 0x300110: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x300110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300114: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x300114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300118: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x300118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30011c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x30011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x300120: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x300120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300124: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x300124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300128: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x300128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30012c: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x30012cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x300130: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x300130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300134: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x300134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300138: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x300138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30013c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x30013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x300140: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x300140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x300144: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x300144u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x300148: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x300148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x30014c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30014cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x300150: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x300150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x300154: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x300154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x300158: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x300158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x30015c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30015cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x300160: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x300160u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x300164: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x300164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x300168: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x300168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30016c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30016cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x300170: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x300170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x300174: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x300174u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x300178: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x300178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30017c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30017cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x300180: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x300180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x300184: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x300184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x300188: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x300188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x30018c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x30018cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x300190: 0x0  nop
    ctx->pc = 0x300190u;
    // NOP
    // 0x300194: 0x0  nop
    ctx->pc = 0x300194u;
    // NOP
    // 0x300198: 0x1810  mfhi        $v1
    ctx->pc = 0x300198u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x30019c: 0x14600077  bnez        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x30019Cu;
    {
        const bool branch_taken_0x30019c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30019c) {
            ctx->pc = 0x30037Cu;
            goto label_30037c;
        }
    }
    ctx->pc = 0x3001A4u;
    // 0x3001a4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3001A4u;
    SET_GPR_U32(ctx, 31, 0x3001ACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3001A4u, 0x3001ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3001ACu;
label_3001ac:
    // 0x3001ac: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3001acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3001b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3001b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3001b4: 0x0  nop
    ctx->pc = 0x3001b4u;
    // NOP
    // 0x3001b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3001b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3001bc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3001bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3001c0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x3001C0u;
    SET_GPR_U32(ctx, 31, 0x3001C8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x3001C0u, 0x3001C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3001C8u;
label_3001c8:
    // 0x3001c8: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x3001c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x3001cc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3001ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3001d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3001d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3001d4: 0x0  nop
    ctx->pc = 0x3001d4u;
    // NOP
    // 0x3001d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3001d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3001dc: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x3001dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x3001e0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3001e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3001e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3001e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3001e8: 0x0  nop
    ctx->pc = 0x3001e8u;
    // NOP
    // 0x3001ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3001ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3001f0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3001f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3001f4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3001F4u;
    SET_GPR_U32(ctx, 31, 0x3001FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3001F4u, 0x3001FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3001FCu;
label_3001fc:
    // 0x3001fc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3001fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x300200: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300204: 0x0  nop
    ctx->pc = 0x300204u;
    // NOP
    // 0x300208: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30020c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x30020cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x300210: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x300214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300218: 0x0  nop
    ctx->pc = 0x300218u;
    // NOP
    // 0x30021c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x30021cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x300220: 0xc06765c  jal         func_19D970
    ctx->pc = 0x300220u;
    SET_GPR_U32(ctx, 31, 0x300228u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x300220u, 0x300228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300228u;
label_300228:
    // 0x300228: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x300228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30022c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30022cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300230: 0x0  nop
    ctx->pc = 0x300230u;
    // NOP
    // 0x300234: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300238: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x300238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30023c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x30023Cu;
    SET_GPR_U32(ctx, 31, 0x300244u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x30023Cu, 0x300244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300244u;
label_300244:
    // 0x300244: 0x3c0245ab  lui         $v0, 0x45AB
    ctx->pc = 0x300244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17835 << 16));
    // 0x300248: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x300248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x30024c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30024cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300250: 0x0  nop
    ctx->pc = 0x300250u;
    // NOP
    // 0x300254: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x300254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300258: 0x3c02c5fa  lui         $v0, 0xC5FA
    ctx->pc = 0x300258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50682 << 16));
    // 0x30025c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30025cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300260: 0x0  nop
    ctx->pc = 0x300260u;
    // NOP
    // 0x300264: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x300264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x300268: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x300268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30026c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x30026Cu;
    SET_GPR_U32(ctx, 31, 0x300274u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x30026Cu, 0x300274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300274u;
label_300274:
    // 0x300274: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x300274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x300278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30027c: 0x0  nop
    ctx->pc = 0x30027cu;
    // NOP
    // 0x300280: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300284: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x300284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x300288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30028c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30028cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300290: 0x0  nop
    ctx->pc = 0x300290u;
    // NOP
    // 0x300294: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x300294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x300298: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x300298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30029c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30029cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3002a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3002a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3002a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3002a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3002a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3002a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3002ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3002acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3002b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3002b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3002b4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3002b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3002b8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3002b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3002bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3002bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3002c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3002c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3002c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3002c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3002c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3002c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3002cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3002ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3002d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3002d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3002d4: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x3002d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3002d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3002d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3002dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3002dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3002e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3002e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3002e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3002e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3002e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3002e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3002ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3002ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3002f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3002f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3002f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3002f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3002f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3002f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3002fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3002fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300300: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300304: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300308: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30030c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30030cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300310: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300314: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x300314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x300318: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30031c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x30031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300320: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300324: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300328: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30032c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30032cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300330: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300334: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300338: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x300338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30033c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300340: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x300340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300344: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300348: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30034c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300350: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300358: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30035c: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x30035cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x300360: 0x24043200  addiu       $a0, $zero, 0x3200
    ctx->pc = 0x300360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12800));
    // 0x300364: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x300364u;
    SET_GPR_U32(ctx, 31, 0x30036Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x300364u, 0x30036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30036Cu;
label_30036c:
    // 0x30036c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30036cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300370: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x300370u;
    SET_GPR_U32(ctx, 31, 0x300378u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x300370u, 0x300378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300378u;
label_300378:
    // 0x300378: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x300378u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30037c:
    // 0x30037c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x300380: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x300380u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x300384: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x300384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x300388: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x300388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30038c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x300390: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x300390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x300394: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x300394u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x300398: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x300398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30039c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x30039cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3003a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3003a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3003a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3003a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3003a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3003a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3003ac: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3003acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3003b0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3003b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3003b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3003b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3003b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3003b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3003bc: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x3003bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3003c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3003c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3003c4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3003c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3003c8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3003c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3003cc: 0x0  nop
    ctx->pc = 0x3003ccu;
    // NOP
    // 0x3003d0: 0x0  nop
    ctx->pc = 0x3003d0u;
    // NOP
    // 0x3003d4: 0x1810  mfhi        $v1
    ctx->pc = 0x3003d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3003d8: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3003D8u;
    {
        const bool branch_taken_0x3003d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3003d8) {
            ctx->pc = 0x30057Cu;
            goto label_30057c;
        }
    }
    ctx->pc = 0x3003E0u;
    // 0x3003e0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3003E0u;
    SET_GPR_U32(ctx, 31, 0x3003E8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3003E0u, 0x3003E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003E8u;
label_3003e8:
    // 0x3003e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3003e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3003ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3003ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3003f0: 0x0  nop
    ctx->pc = 0x3003f0u;
    // NOP
    // 0x3003f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3003f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3003f8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3003f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3003fc: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x3003fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x300400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300404: 0x0  nop
    ctx->pc = 0x300404u;
    // NOP
    // 0x300408: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x300408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x30040c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x30040Cu;
    SET_GPR_U32(ctx, 31, 0x300414u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x30040Cu, 0x300414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300414u;
label_300414:
    // 0x300414: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x300414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x300418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30041c: 0x0  nop
    ctx->pc = 0x30041cu;
    // NOP
    // 0x300420: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300424: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x300424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x300428: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30042c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30042cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300430: 0x0  nop
    ctx->pc = 0x300430u;
    // NOP
    // 0x300434: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x300434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x300438: 0xc06765c  jal         func_19D970
    ctx->pc = 0x300438u;
    SET_GPR_U32(ctx, 31, 0x300440u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x300438u, 0x300440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300440u;
label_300440:
    // 0x300440: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x300440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x300444: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x300444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x300448: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30044c: 0x0  nop
    ctx->pc = 0x30044cu;
    // NOP
    // 0x300450: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300454: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x300454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x300458: 0x3c02c5fa  lui         $v0, 0xC5FA
    ctx->pc = 0x300458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50682 << 16));
    // 0x30045c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30045cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300460: 0x0  nop
    ctx->pc = 0x300460u;
    // NOP
    // 0x300464: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x300464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x300468: 0xc06765c  jal         func_19D970
    ctx->pc = 0x300468u;
    SET_GPR_U32(ctx, 31, 0x300470u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x300468u, 0x300470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300470u;
label_300470:
    // 0x300470: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x300470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x300474: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x300474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x300478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30047c: 0x0  nop
    ctx->pc = 0x30047cu;
    // NOP
    // 0x300480: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300484: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x300484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x300488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30048c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30048cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300490: 0x0  nop
    ctx->pc = 0x300490u;
    // NOP
    // 0x300494: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x300494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x300498: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x300498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30049c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30049cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3004a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3004a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3004a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3004a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3004a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3004ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3004acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3004b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3004b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3004b4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3004b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004b8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3004b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3004bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3004bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3004c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3004c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3004c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3004c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3004c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3004cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3004ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3004d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3004d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3004d4: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x3004d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3004d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3004d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3004dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3004dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3004e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3004e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3004e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3004e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3004e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3004ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3004ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3004f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3004f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3004f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3004f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3004f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3004fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3004fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300500: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300504: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300508: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30050c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300510: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300514: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x300514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x300518: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30051c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x30051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300520: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300524: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300528: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30052c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30052cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300530: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300534: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300538: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x300538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30053c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300540: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x300540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300544: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300548: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30054c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300550: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300554: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30055c: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x30055cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x300560: 0x24043300  addiu       $a0, $zero, 0x3300
    ctx->pc = 0x300560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13056));
    // 0x300564: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x300564u;
    SET_GPR_U32(ctx, 31, 0x30056Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x300564u, 0x30056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30056Cu;
label_30056c:
    // 0x30056c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30056cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300570: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x300570u;
    SET_GPR_U32(ctx, 31, 0x300578u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x300570u, 0x300578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300578u;
label_300578:
    // 0x300578: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x300578u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30057c:
    // 0x30057c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300580: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x300580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x300584: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x300584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x300588: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x300588u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30058c: 0x0  nop
    ctx->pc = 0x30058cu;
    // NOP
    // 0x300590: 0x0  nop
    ctx->pc = 0x300590u;
    // NOP
    // 0x300594: 0x1810  mfhi        $v1
    ctx->pc = 0x300594u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x300598: 0x14600087  bnez        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x300598u;
    {
        const bool branch_taken_0x300598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300598) {
            ctx->pc = 0x3007B8u;
            goto label_3007b8;
        }
    }
    ctx->pc = 0x3005A0u;
    // 0x3005a0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3005A0u;
    SET_GPR_U32(ctx, 31, 0x3005A8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3005A0u, 0x3005A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005A8u;
label_3005a8:
    // 0x3005a8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3005a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3005ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3005acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3005b0: 0x0  nop
    ctx->pc = 0x3005b0u;
    // NOP
    // 0x3005b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3005b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3005b8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3005b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3005bc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x3005BCu;
    SET_GPR_U32(ctx, 31, 0x3005C4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x3005BCu, 0x3005C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005C4u;
label_3005c4:
    // 0x3005c4: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x3005c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x3005c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3005c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3005cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3005ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3005d0: 0x0  nop
    ctx->pc = 0x3005d0u;
    // NOP
    // 0x3005d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3005d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3005d8: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x3005d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x3005dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3005dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3005e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3005e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3005e4: 0x0  nop
    ctx->pc = 0x3005e4u;
    // NOP
    // 0x3005e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3005e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3005ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3005ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3005f0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3005F0u;
    SET_GPR_U32(ctx, 31, 0x3005F8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3005F0u, 0x3005F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005F8u;
label_3005f8:
    // 0x3005f8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3005f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3005fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3005fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300600: 0x0  nop
    ctx->pc = 0x300600u;
    // NOP
    // 0x300604: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300608: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x300608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x30060c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x300610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300614: 0x0  nop
    ctx->pc = 0x300614u;
    // NOP
    // 0x300618: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x300618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x30061c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x30061Cu;
    SET_GPR_U32(ctx, 31, 0x300624u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x30061Cu, 0x300624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300624u;
label_300624:
    // 0x300624: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x300624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x300628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30062c: 0x0  nop
    ctx->pc = 0x30062cu;
    // NOP
    // 0x300630: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x300630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300634: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x300634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x300638: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x300638u;
    SET_GPR_U32(ctx, 31, 0x300640u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x300638u, 0x300640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300640u;
label_300640:
    // 0x300640: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x300640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x300644: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x300644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x300648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30064c: 0x0  nop
    ctx->pc = 0x30064cu;
    // NOP
    // 0x300650: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x300650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300654: 0x3c02c5fa  lui         $v0, 0xC5FA
    ctx->pc = 0x300654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50682 << 16));
    // 0x300658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30065c: 0x0  nop
    ctx->pc = 0x30065cu;
    // NOP
    // 0x300660: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x300660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x300664: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x300664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x300668: 0xc06765c  jal         func_19D970
    ctx->pc = 0x300668u;
    SET_GPR_U32(ctx, 31, 0x300670u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x300668u, 0x300670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300670u;
label_300670:
    // 0x300670: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x300670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x300674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300678: 0x0  nop
    ctx->pc = 0x300678u;
    // NOP
    // 0x30067c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30067cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x300680: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x300680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x300684: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x300688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30068c: 0x0  nop
    ctx->pc = 0x30068cu;
    // NOP
    // 0x300690: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x300690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x300694: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x300694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x300698: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30069c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30069cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3006a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3006a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3006a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3006a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3006a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3006a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3006ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3006acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3006b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3006b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3006b4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3006b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3006b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3006b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3006bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3006bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3006c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3006c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3006c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3006c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3006c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3006c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3006cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3006ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3006d0: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x3006d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3006d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3006d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3006d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3006d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3006dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3006dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3006e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3006e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3006e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3006e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3006e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3006e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3006ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3006ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3006f0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3006f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3006f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3006f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3006f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3006f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3006fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3006fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300700: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300704: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300708: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30070c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30070cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300710: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x300710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x300714: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300718: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x300718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x30071c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30071cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300720: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300724: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300728: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30072c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300730: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300734: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x300734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300738: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30073c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x30073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300740: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300744: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300748: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30074c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300750: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300754: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300758: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x300758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30075c: 0x24043201  addiu       $a0, $zero, 0x3201
    ctx->pc = 0x30075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12801));
    // 0x300760: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x300760u;
    SET_GPR_U32(ctx, 31, 0x300768u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x300760u, 0x300768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300768u;
label_300768:
    // 0x300768: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x300768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30076c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x30076Cu;
    SET_GPR_U32(ctx, 31, 0x300774u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x30076Cu, 0x300774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300774u;
label_300774:
    // 0x300774: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x300774u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300778: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30077c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x30077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300780: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300784: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x300788: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30078c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30078cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x300790: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300794: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x300794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300798: 0x34049303  ori         $a0, $zero, 0x9303
    ctx->pc = 0x300798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37635);
    // 0x30079c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30079cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3007a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3007a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3007a4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3007A4u;
    SET_GPR_U32(ctx, 31, 0x3007ACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3007A4u, 0x3007ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007ACu;
label_3007ac:
    // 0x3007ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3007acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3007b0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3007B0u;
    SET_GPR_U32(ctx, 31, 0x3007B8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3007B0u, 0x3007B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007B8u;
label_3007b8:
    // 0x3007b8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x3007b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3007bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3007bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3007c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3007c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3007c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3007c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3007c8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3007c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3007cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3007CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3007CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3007D4u;
}
