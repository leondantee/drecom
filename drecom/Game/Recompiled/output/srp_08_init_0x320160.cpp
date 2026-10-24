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

// Function: srp_08_init
// Address: 0x320160 - 0x3204cc
void srp_08_init_0x320160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_08_init_0x320160");
#endif

    switch (ctx->pc) {
        case 0x320188u: goto label_320188;
        case 0x3201c4u: goto label_3201c4;
        case 0x320214u: goto label_320214;
        case 0x320230u: goto label_320230;
        case 0x320258u: goto label_320258;
        case 0x320288u: goto label_320288;
        case 0x3202e0u: goto label_3202e0;
        case 0x320334u: goto label_320334;
        case 0x32043cu: goto label_32043c;
        default: break;
    }

    ctx->pc = 0x320160u;

    // 0x320160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x320160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x320164: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x320164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x320168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32016c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x32016cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x320170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320174: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320178: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x320178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x32017c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x32017cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320180: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x320180u;
    SET_GPR_U32(ctx, 31, 0x320188u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x320180u, 0x320188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320188u;
label_320188:
    // 0x320188: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32018c: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x32018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x320190: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x320190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x320194: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x320194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x320198: 0xac820b18  sw          $v0, 0xB18($a0)
    ctx->pc = 0x320198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 2));
    // 0x32019c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x32019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3201a0: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x3201a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x3201a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3201a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3201a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3201a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3201ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3201acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3201b0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3201b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3201b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3201b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3201b8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3201b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3201bc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x3201BCu;
    SET_GPR_U32(ctx, 31, 0x3201C4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x3201BCu, 0x3201C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3201C4u;
label_3201c4:
    // 0x3201c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3201c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3201c8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x3201c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x3201cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3201CCu;
    {
        const bool branch_taken_0x3201cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3201cc) {
            ctx->pc = 0x3201E8u;
            goto label_3201e8;
        }
    }
    ctx->pc = 0x3201D4u;
    // 0x3201d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3201d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3201d8: 0x0  nop
    ctx->pc = 0x3201d8u;
    // NOP
    // 0x3201dc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3201dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3201e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3201E0u;
    {
        const bool branch_taken_0x3201e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3201e0) {
            ctx->pc = 0x320204u;
            goto label_320204;
        }
    }
    ctx->pc = 0x3201E8u;
label_3201e8:
    // 0x3201e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3201e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3201ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3201ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3201f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3201f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3201f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3201f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3201f8: 0x0  nop
    ctx->pc = 0x3201f8u;
    // NOP
    // 0x3201fc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3201fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x320200: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x320200u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_320204:
    // 0x320204: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x320204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x320208: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x320208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32020c: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x32020Cu;
    SET_GPR_U32(ctx, 31, 0x320214u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x320214u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x320214u) { return; }
    ctx->pc = 0x320214u;
label_320214:
    // 0x320214: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x320214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x320218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x320218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32021c: 0x0  nop
    ctx->pc = 0x32021cu;
    // NOP
    // 0x320220: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x320220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x320224: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x320224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320228: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x320228u;
    {
        const bool branch_taken_0x320228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320228) {
            ctx->pc = 0x3202E8u;
            goto label_3202e8;
        }
    }
    ctx->pc = 0x320230u;
label_320230:
    // 0x320230: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x320230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320234: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320238: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x320238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32023c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x32023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x320240: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x320240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x320244: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320248: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x320248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32024c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x320250: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x320250u;
    SET_GPR_U32(ctx, 31, 0x320258u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x320250u, 0x320258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320258u;
label_320258:
    // 0x320258: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32025c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x32025cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x320260: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x320260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x320264: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x320264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x320268: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32026c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x32026cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320270: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x320270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320274: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320278: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x320278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32027c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x32027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x320280: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x320280u;
    SET_GPR_U32(ctx, 31, 0x320288u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x320280u, 0x320288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320288u;
label_320288:
    // 0x320288: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x320288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32028c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x32028cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x320290: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x320290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x320294: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x320294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x320298: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320298u;
    {
        const bool branch_taken_0x320298 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x320298) {
            ctx->pc = 0x3202B4u;
            goto label_3202b4;
        }
    }
    ctx->pc = 0x3202A0u;
    // 0x3202a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3202a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3202a4: 0x0  nop
    ctx->pc = 0x3202a4u;
    // NOP
    // 0x3202a8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3202a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3202ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3202ACu;
    {
        const bool branch_taken_0x3202ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3202ac) {
            ctx->pc = 0x3202D0u;
            goto label_3202d0;
        }
    }
    ctx->pc = 0x3202B4u;
label_3202b4:
    // 0x3202b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3202b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3202b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3202b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3202bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3202bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3202c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3202c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3202c4: 0x0  nop
    ctx->pc = 0x3202c4u;
    // NOP
    // 0x3202c8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3202c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3202cc: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x3202ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_3202d0:
    // 0x3202d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3202d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3202d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3202d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3202d8: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x3202D8u;
    SET_GPR_U32(ctx, 31, 0x3202E0u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x3202E0u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3202E0u) { return; }
    ctx->pc = 0x3202E0u;
label_3202e0:
    // 0x3202e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3202e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3202e4: 0x0  nop
    ctx->pc = 0x3202e4u;
    // NOP
label_3202e8:
    // 0x3202e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3202e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3202ec: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3202ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3202f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3202f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3202f4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3202f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3202f8: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3202F8u;
    {
        const bool branch_taken_0x3202f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3202f8) {
            ctx->pc = 0x320230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320230;
        }
    }
    ctx->pc = 0x320300u;
    // 0x320300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320304: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x320304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x320308: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32030c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320310: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320314: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320318: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x320318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32031c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32031cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320320: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320324: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x320324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x320328: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320328u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32032c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32032Cu;
    {
        const bool branch_taken_0x32032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32032c) {
            ctx->pc = 0x320370u;
            goto label_320370;
        }
    }
    ctx->pc = 0x320334u;
label_320334:
    // 0x320334: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320338: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x320338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x32033c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32033cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320340: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x320340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x320344: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x320344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320348: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32034c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320350: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x320350u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320354: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320358: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32035c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320360: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x320360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320364: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x320364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x320368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32036c: 0x0  nop
    ctx->pc = 0x32036cu;
    // NOP
label_320370:
    // 0x320370: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320374: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320378: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32037c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x32037cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320380: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x320380u;
    {
        const bool branch_taken_0x320380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320380) {
            ctx->pc = 0x320334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320334;
        }
    }
    ctx->pc = 0x320388u;
    // 0x320388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32038c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x32038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320390: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x320390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x320394: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x320394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x320398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x320398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32039c: 0x0  nop
    ctx->pc = 0x32039cu;
    // NOP
    // 0x3203a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3203a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3203a4: 0x0  nop
    ctx->pc = 0x3203a4u;
    // NOP
    // 0x3203a8: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x3203A8u;
    {
        const bool branch_taken_0x3203a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3203a8) {
            ctx->pc = 0x320424u;
            goto label_320424;
        }
    }
    ctx->pc = 0x3203B0u;
    // 0x3203b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3203b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3203b4: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x3203b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3203b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3203b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3203bc: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x3203bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3203c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3203c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3203c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3203c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3203c8: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3203c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3203cc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3203CCu;
    {
        const bool branch_taken_0x3203cc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3203cc) {
            ctx->pc = 0x3203E8u;
            goto label_3203e8;
        }
    }
    ctx->pc = 0x3203D4u;
    // 0x3203d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3203d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3203d8: 0x0  nop
    ctx->pc = 0x3203d8u;
    // NOP
    // 0x3203dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3203dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3203e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3203E0u;
    {
        const bool branch_taken_0x3203e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3203e0) {
            ctx->pc = 0x320404u;
            goto label_320404;
        }
    }
    ctx->pc = 0x3203E8u;
label_3203e8:
    // 0x3203e8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3203e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3203ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3203ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3203f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3203f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3203f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3203f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3203f8: 0x0  nop
    ctx->pc = 0x3203f8u;
    // NOP
    // 0x3203fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3203fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x320400: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x320400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_320404:
    // 0x320404: 0x0  nop
    ctx->pc = 0x320404u;
    // NOP
    // 0x320408: 0x0  nop
    ctx->pc = 0x320408u;
    // NOP
    // 0x32040c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32040cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x320410: 0x0  nop
    ctx->pc = 0x320410u;
    // NOP
    // 0x320414: 0x0  nop
    ctx->pc = 0x320414u;
    // NOP
    // 0x320418: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x320418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x32041c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32041Cu;
    {
        const bool branch_taken_0x32041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32041c) {
            ctx->pc = 0x320430u;
            goto label_320430;
        }
    }
    ctx->pc = 0x320424u;
label_320424:
    // 0x320424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320428: 0x0  nop
    ctx->pc = 0x320428u;
    // NOP
    // 0x32042c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x32042cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_320430:
    // 0x320430: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320430u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320434: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x320434u;
    {
        const bool branch_taken_0x320434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320434) {
            ctx->pc = 0x3204A0u;
            goto label_3204a0;
        }
    }
    ctx->pc = 0x32043Cu;
label_32043c:
    // 0x32043c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320440: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x320440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320444: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320444u;
    {
        const bool branch_taken_0x320444 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x320444) {
            ctx->pc = 0x320460u;
            goto label_320460;
        }
    }
    ctx->pc = 0x32044Cu;
    // 0x32044c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x32044cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320450: 0x0  nop
    ctx->pc = 0x320450u;
    // NOP
    // 0x320454: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x320454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x320458: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x320458u;
    {
        const bool branch_taken_0x320458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320458) {
            ctx->pc = 0x32047Cu;
            goto label_32047c;
        }
    }
    ctx->pc = 0x320460u;
label_320460:
    // 0x320460: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x320460u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x320464: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x320464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x320468: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x320468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32046c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32046cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320470: 0x0  nop
    ctx->pc = 0x320470u;
    // NOP
    // 0x320474: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x320474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x320478: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x320478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32047c:
    // 0x32047c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x32047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320480: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x320480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x320484: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x320484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x320488: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x320488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x32048c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320494: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x320494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x320498: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32049c: 0x0  nop
    ctx->pc = 0x32049cu;
    // NOP
label_3204a0:
    // 0x3204a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3204a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3204a4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3204a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3204a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3204a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3204ac: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x3204acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3204b0: 0x1020ffe2  beqz        $at, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3204B0u;
    {
        const bool branch_taken_0x3204b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3204b0) {
            ctx->pc = 0x32043Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32043c;
        }
    }
    ctx->pc = 0x3204B8u;
    // 0x3204b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3204b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3204bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3204bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3204c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3204c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3204c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3204C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3204C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3204CCu;
}
