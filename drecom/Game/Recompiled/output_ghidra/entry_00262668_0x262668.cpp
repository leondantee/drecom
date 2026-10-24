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

// Function: entry_00262668
// Address: 0x262668 - 0x262740
void entry_00262668_0x262668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262668_0x262668");
#endif

    switch (ctx->pc) {
        case 0x2626fcu: goto label_2626fc;
        case 0x26271cu: goto label_26271c;
        case 0x262730u: goto label_262730;
        default: break;
    }

    ctx->pc = 0x262668u;

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
            return;
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
            return;
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
    ctx->pc = 0x262740u;
}
