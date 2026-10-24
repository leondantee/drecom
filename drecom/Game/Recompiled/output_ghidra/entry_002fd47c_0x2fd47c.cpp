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

// Function: entry_002fd47c
// Address: 0x2fd47c - 0x2fd568
void entry_002fd47c_0x2fd47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fd47c_0x2fd47c");
#endif

    switch (ctx->pc) {
        case 0x2fd4c8u: goto label_2fd4c8;
        case 0x2fd4ecu: goto label_2fd4ec;
        case 0x2fd508u: goto label_2fd508;
        default: break;
    }

    ctx->pc = 0x2fd47cu;

    // 0x2fd47c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2fd47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd480: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fd480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fd484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd488: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FD488u;
    {
        const bool branch_taken_0x2fd488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fd488) {
            ctx->pc = 0x2FD568u;
            return;
        }
    }
    ctx->pc = 0x2FD490u;
    // 0x2fd490: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd494: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd494u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd498: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd49c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd4a0: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x2fd4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x2fd4a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fd4a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd4a8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2fd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fd4acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fd4b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2fd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2fd4b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd4b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4c0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FD4C0u;
    SET_GPR_U32(ctx, 31, 0x2FD4C8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FD4C8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD4C8u) { return; }
    ctx->pc = 0x2FD4C8u;
label_2fd4c8:
    // 0x2fd4c8: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x2fd4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd4cc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2fd4ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2fd4d0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2fd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2fd4d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2fd4d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4e0: 0x24461610  addiu       $a2, $v0, 0x1610
    ctx->pc = 0x2fd4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x2fd4e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FD4E4u;
    SET_GPR_U32(ctx, 31, 0x2FD4ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FD4E4u, 0x2FD4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD4ECu;
label_2fd4ec:
    // 0x2fd4ec: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x2fd4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x2fd4f0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x2fd4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x2fd4f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd4f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd4fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fd4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd500: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FD500u;
    SET_GPR_U32(ctx, 31, 0x2FD508u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FD508u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FD508u) { return; }
    ctx->pc = 0x2FD508u;
label_2fd508:
    // 0x2fd508: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd50c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd510: 0x0  nop
    ctx->pc = 0x2fd510u;
    // NOP
    // 0x2fd514: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2fd514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2fd518: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fd518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fd51c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd51cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd520: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2fd520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fd524: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd528: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd528u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd52c: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x2fd52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x2fd530: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fd530u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fd534: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fd534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fd538: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fd538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fd53c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fd53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd540: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd544: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2fd544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fd548: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x2fd548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fd54c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fd54cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd550: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fd550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fd554: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fd554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fd558: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fd558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fd55c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fd55cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fd560: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2FD560u;
    {
        const bool branch_taken_0x2fd560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd560) {
            ctx->pc = 0x2FD6D4u;
            return;
        }
    }
    ctx->pc = 0x2FD568u;
}
