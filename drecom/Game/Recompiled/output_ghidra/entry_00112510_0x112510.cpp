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

// Function: entry_00112510
// Address: 0x112510 - 0x1125c8
void entry_00112510_0x112510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112510_0x112510");
#endif

    ctx->pc = 0x112510u;

    // 0x112510: 0x1025c3  sra         $a0, $s0, 23
    ctx->pc = 0x112510u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 23));
    // 0x112514: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x112514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x112518: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x112518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11251c: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x11251cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x112520: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x112520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x112524: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x112524u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x112528: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x112528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x11252c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x11252Cu;
    {
        const bool branch_taken_0x11252c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11252c) {
            ctx->pc = 0x112530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11252Cu;
            // 0x112530: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1125CCu;
            return;
        }
    }
    ctx->pc = 0x112534u;
    // 0x112534: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x112534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x112538: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x112538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x11253c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11253cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112540: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x112540u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x112544: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x112544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x112548: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x112548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x11254c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11254cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112550: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x112550u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x112554: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x112554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x112558: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x112558u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x11255c: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x11255cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x112560: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x112560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x112564: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x112564u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x112568: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x112568u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x11256c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11256cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x112570: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x112570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x112574: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x112574u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x112578: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x112578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11257c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11257cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x112580: 0x2862001a  slti        $v0, $v1, 0x1A
    ctx->pc = 0x112580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x112584: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x112584u;
    {
        const bool branch_taken_0x112584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112584) {
            ctx->pc = 0x112588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112584u;
            // 0x112588: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1125CCu;
            return;
        }
    }
    ctx->pc = 0x11258Cu;
    // 0x11258c: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x11258cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x112590: 0x3421a300  ori         $at, $at, 0xA300
    ctx->pc = 0x112590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41728);
    // 0x112594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112598: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x112598u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x11259c: 0x3c01248d  lui         $at, 0x248D
    ctx->pc = 0x11259cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9357 << 16));
    // 0x1125a0: 0x34213132  ori         $at, $at, 0x3132
    ctx->pc = 0x1125a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12594);
    // 0x1125a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1125a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1125a8: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x1125a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1125ac: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1125acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x1125b0: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1125b0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1125b4: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1125b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1125b8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1125b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1125bc: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x1125bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1125c0: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1125c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1125c4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1125c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x1125c8u;
}
