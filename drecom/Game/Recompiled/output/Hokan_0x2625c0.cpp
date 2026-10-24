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

// Function: Hokan
// Address: 0x2625c0 - 0x262930
void Hokan_0x2625c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hokan_0x2625c0");
#endif

    switch (ctx->pc) {
        case 0x262644u: goto label_262644;
        case 0x262668u: goto label_262668;
        case 0x2626fcu: goto label_2626fc;
        case 0x26271cu: goto label_26271c;
        case 0x262730u: goto label_262730;
        case 0x262754u: goto label_262754;
        case 0x262768u: goto label_262768;
        case 0x26277cu: goto label_26277c;
        case 0x262790u: goto label_262790;
        case 0x2627a4u: goto label_2627a4;
        case 0x2627b8u: goto label_2627b8;
        case 0x2627c8u: goto label_2627c8;
        case 0x2627dcu: goto label_2627dc;
        case 0x2627ecu: goto label_2627ec;
        case 0x262800u: goto label_262800;
        case 0x262810u: goto label_262810;
        case 0x262820u: goto label_262820;
        default: break;
    }

    ctx->pc = 0x2625c0u;

    // 0x2625c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2625c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2625c4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2625c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2625c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2625c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2625cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2625ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2625d0: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x2625d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x2625d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2625d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2625d8: 0x904209e5  lbu         $v0, 0x9E5($v0)
    ctx->pc = 0x2625d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2533)));
    // 0x2625dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2625dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2625e0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2625e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2625e4: 0x904209e6  lbu         $v0, 0x9E6($v0)
    ctx->pc = 0x2625e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2534)));
    // 0x2625e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2625e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2625ec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2625ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2625f0: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2625f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2625f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2625f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2625f8: 0x904209e5  lbu         $v0, 0x9E5($v0)
    ctx->pc = 0x2625f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2533)));
    // 0x2625fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2625fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262600: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x262600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x262604: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x262604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262608: 0x90421083  lbu         $v0, 0x1083($v0)
    ctx->pc = 0x262608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4227)));
    // 0x26260c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26260cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262610: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x262610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262614: 0x90421084  lbu         $v0, 0x1084($v0)
    ctx->pc = 0x262614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4228)));
    // 0x262618: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x262618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26261c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26261cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262620: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x262620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x262624: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x262624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262628: 0x90421083  lbu         $v0, 0x1083($v0)
    ctx->pc = 0x262628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4227)));
    // 0x26262c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26262cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262630: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x262630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x262634: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x262634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x262638: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x262638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26263c: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x26263Cu;
    SET_GPR_U32(ctx, 31, 0x262644u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x262644u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262644u) { return; }
    ctx->pc = 0x262644u;
label_262644:
    // 0x262644: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x262644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262648: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x262648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26264c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x26264cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x262650: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x262650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x262654: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x262654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262658: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x262658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26265c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x26265cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x262660: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x262660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x262664: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x262664u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_262668:
    // 0x262668: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x262668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x26266c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x26266cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x262670: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x262670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x262674: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x262674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x262678: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x262678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26267c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x26267cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x262680: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x262680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x262684: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x262684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x262688: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x262688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x26268c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26268cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262690: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x262690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x262694: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x262694u;
    {
        const bool branch_taken_0x262694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262694) {
            ctx->pc = 0x262820u;
            goto label_262820;
        }
    }
    ctx->pc = 0x26269Cu;
    // 0x26269c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x26269cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2626a0: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x2626a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x2626a4: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2626a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2626a8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2626a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2626ac: 0x8c42034c  lw          $v0, 0x34C($v0)
    ctx->pc = 0x2626acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 844)));
    // 0x2626b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2626b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2626b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2626b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2626b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2626b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2626bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2626bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2626c0: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2626C0u;
    {
        const bool branch_taken_0x2626c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2626c0) {
            ctx->pc = 0x262740u;
            goto label_262740;
        }
    }
    ctx->pc = 0x2626C8u;
    // 0x2626c8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2626c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2626cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2626ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2626d0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2626d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2626d4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2626d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2626d8: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2626d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2626dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2626dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2626e0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2626e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2626e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2626e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2626e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2626e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2626ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2626ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2626f0: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x2626f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2626f4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2626F4u;
    SET_GPR_U32(ctx, 31, 0x2626FCu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2626FCu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2626FCu) { return; }
    ctx->pc = 0x2626FCu;
label_2626fc:
    // 0x2626fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2626fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262704: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x262704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262708: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x262708u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26270c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262710: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x262710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262714: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262714u;
    SET_GPR_U32(ctx, 31, 0x26271Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x26271Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26271Cu) { return; }
    ctx->pc = 0x26271Cu;
label_26271c:
    // 0x26271c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x26271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x262720: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x262720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262724: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x262724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262728: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x262728u;
    SET_GPR_U32(ctx, 31, 0x262730u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x262728u, 0x262730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262730u;
label_262730:
    // 0x262730: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262738: 0x0  nop
    ctx->pc = 0x262738u;
    // NOP
    // 0x26273c: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x26273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_262740:
    // 0x262740: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262744: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262744u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262748: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x262748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x26274c: 0xc040c80  jal         func_103200
    ctx->pc = 0x26274Cu;
    SET_GPR_U32(ctx, 31, 0x262754u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262754u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262754u) { return; }
    ctx->pc = 0x262754u;
label_262754:
    // 0x262754: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262758: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x262758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26275c: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x26275cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x262760: 0xc040c80  jal         func_103200
    ctx->pc = 0x262760u;
    SET_GPR_U32(ctx, 31, 0x262768u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262768u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262768u) { return; }
    ctx->pc = 0x262768u;
label_262768:
    // 0x262768: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26276c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26276cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262770: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x262770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262774: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262774u;
    SET_GPR_U32(ctx, 31, 0x26277Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x26277Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26277Cu) { return; }
    ctx->pc = 0x26277Cu;
label_26277c:
    // 0x26277c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262780: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262784: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x262784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262788: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262788u;
    SET_GPR_U32(ctx, 31, 0x262790u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262790u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262790u) { return; }
    ctx->pc = 0x262790u;
label_262790:
    // 0x262790: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262794: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262798: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x262798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x26279c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x26279Cu;
    SET_GPR_U32(ctx, 31, 0x2627A4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2627A4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2627A4u) { return; }
    ctx->pc = 0x2627A4u;
label_2627a4:
    // 0x2627a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2627a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2627a8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2627a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2627ac: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x2627acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2627b0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2627B0u;
    SET_GPR_U32(ctx, 31, 0x2627B8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2627B8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2627B8u) { return; }
    ctx->pc = 0x2627B8u;
label_2627b8:
    // 0x2627b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2627b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2627bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2627bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2627c0: 0xc040c24  jal         func_103090
    ctx->pc = 0x2627C0u;
    SET_GPR_U32(ctx, 31, 0x2627C8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2627C8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2627C8u) { return; }
    ctx->pc = 0x2627C8u;
label_2627c8:
    // 0x2627c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2627c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2627cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2627ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2627d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2627d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2627d4: 0xc040c12  jal         func_103048
    ctx->pc = 0x2627D4u;
    SET_GPR_U32(ctx, 31, 0x2627DCu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2627DCu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2627DCu) { return; }
    ctx->pc = 0x2627DCu;
label_2627dc:
    // 0x2627dc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2627dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2627e0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2627e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2627e4: 0xc040c24  jal         func_103090
    ctx->pc = 0x2627E4u;
    SET_GPR_U32(ctx, 31, 0x2627ECu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2627ECu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2627ECu) { return; }
    ctx->pc = 0x2627ECu;
label_2627ec:
    // 0x2627ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2627ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2627f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2627f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2627f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2627f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2627f8: 0xc040c12  jal         func_103048
    ctx->pc = 0x2627F8u;
    SET_GPR_U32(ctx, 31, 0x262800u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262800u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262800u) { return; }
    ctx->pc = 0x262800u;
label_262800:
    // 0x262800: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x262800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x262804: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262808: 0xc040c24  jal         func_103090
    ctx->pc = 0x262808u;
    SET_GPR_U32(ctx, 31, 0x262810u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262810u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262810u) { return; }
    ctx->pc = 0x262810u;
label_262810:
    // 0x262810: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x262810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x262814: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262818: 0xc040ca2  jal         func_103288
    ctx->pc = 0x262818u;
    SET_GPR_U32(ctx, 31, 0x262820u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x262820u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262820u) { return; }
    ctx->pc = 0x262820u;
label_262820:
    // 0x262820: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x262820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x262824: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x262824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262828: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x262828u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x26282c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26282cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262830: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x262830u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x262834: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x262834u;
    {
        const bool branch_taken_0x262834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262834) {
            ctx->pc = 0x262668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262668;
        }
    }
    ctx->pc = 0x26283Cu;
    // 0x26283c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x26283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262840: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x262840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x262844: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x262844u;
    {
        const bool branch_taken_0x262844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262844) {
            ctx->pc = 0x2628E0u;
            goto label_2628e0;
        }
    }
    ctx->pc = 0x26284Cu;
    // 0x26284c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x26284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262850: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x262850u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x262854: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262858: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x262858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x26285c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26285Cu;
    {
        const bool branch_taken_0x26285c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26285c) {
            ctx->pc = 0x2628A4u;
            goto label_2628a4;
        }
    }
    ctx->pc = 0x262864u;
    // 0x262864: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x262864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262868: 0xc46109cc  lwc1        $f1, 0x9CC($v1)
    ctx->pc = 0x262868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26286c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x26286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262870: 0xc46009c8  lwc1        $f0, 0x9C8($v1)
    ctx->pc = 0x262870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262874: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x262874u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262878: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x262878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26287c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26287cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262880: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x262880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262884: 0xc46009c8  lwc1        $f0, 0x9C8($v1)
    ctx->pc = 0x262884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x262888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26288c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x26288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262890: 0xe46009cc  swc1        $f0, 0x9CC($v1)
    ctx->pc = 0x262890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2508), bits); }
    // 0x262894: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x262894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x262898: 0xc46009cc  lwc1        $f0, 0x9CC($v1)
    ctx->pc = 0x262898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26289c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x26289cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628a0: 0xe46009c8  swc1        $f0, 0x9C8($v1)
    ctx->pc = 0x2628a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2504), bits); }
label_2628a4:
    // 0x2628a4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2628a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628a8: 0xc46009cc  lwc1        $f0, 0x9CC($v1)
    ctx->pc = 0x2628a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2628ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2628acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628b0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2628b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2628b4: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2628b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2628b8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2628b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628bc: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x2628bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x2628c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2628c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2628c4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2628c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2628c8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2628C8u;
    {
        const bool branch_taken_0x2628c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2628c8) {
            ctx->pc = 0x2628E0u;
            goto label_2628e0;
        }
    }
    ctx->pc = 0x2628D0u;
    // 0x2628d0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2628d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628d4: 0x908309e6  lbu         $v1, 0x9E6($a0)
    ctx->pc = 0x2628d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2534)));
    // 0x2628d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2628d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2628dc: 0xa08309e6  sb          $v1, 0x9E6($a0)
    ctx->pc = 0x2628dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2534), (uint8_t)GPR_U32(ctx, 3));
label_2628e0:
    // 0x2628e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2628e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628e4: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x2628e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x2628e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2628E8u;
    {
        const bool branch_taken_0x2628e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2628e8) {
            ctx->pc = 0x262918u;
            goto label_262918;
        }
    }
    ctx->pc = 0x2628F0u;
    // 0x2628f0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2628f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628f4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x2628f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x2628f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2628f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2628fc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2628fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x262900: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x262900u;
    {
        const bool branch_taken_0x262900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262900) {
            ctx->pc = 0x262918u;
            goto label_262918;
        }
    }
    ctx->pc = 0x262908u;
    // 0x262908: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x262908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x26290c: 0x90831084  lbu         $v1, 0x1084($a0)
    ctx->pc = 0x26290cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4228)));
    // 0x262910: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262914: 0xa0831084  sb          $v1, 0x1084($a0)
    ctx->pc = 0x262914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4228), (uint8_t)GPR_U32(ctx, 3));
label_262918:
    // 0x262918: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x262918u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26291c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26291cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262924: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x262924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x262928: 0x3e00008  jr          $ra
    ctx->pc = 0x262928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262930u;
}
