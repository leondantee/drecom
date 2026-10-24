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

// Function: Sys_flg_set
// Address: 0x3781c0 - 0x3782f8
void Sys_flg_set_0x3781c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sys_flg_set_0x3781c0");
#endif

    switch (ctx->pc) {
        case 0x3781dcu: goto label_3781dc;
        default: break;
    }

    ctx->pc = 0x3781c0u;

    // 0x3781c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3781c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3781c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3781c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3781c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3781c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3781cc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3781ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3781d0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3781d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3781d4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3781D4u;
    {
        const bool branch_taken_0x3781d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3781d4) {
            ctx->pc = 0x3782D8u;
            goto label_3782d8;
        }
    }
    ctx->pc = 0x3781DCu;
label_3781dc:
    // 0x3781dc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3781dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3781e0: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x3781e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x3781e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3781e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3781e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3781e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3781ec: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3781ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3781f0: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x3781f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x3781f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3781f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3781f8: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x3781f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3781fc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3781fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x378200: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x378200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x378204: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x378204u;
    {
        const bool branch_taken_0x378204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378204) {
            ctx->pc = 0x378210u;
            goto label_378210;
        }
    }
    ctx->pc = 0x37820Cu;
    // 0x37820c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x37820cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378210:
    // 0x378210: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x378210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x378214: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x378214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x378218: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37821c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x37821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378220: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x378220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x378224: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378228: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x378228u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x37822c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x37822cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x378230: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x378230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x378234: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x378234u;
    {
        const bool branch_taken_0x378234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378234) {
            ctx->pc = 0x378240u;
            goto label_378240;
        }
    }
    ctx->pc = 0x37823Cu;
    // 0x37823c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x37823cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_378240:
    // 0x378240: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x378240u;
    {
        const bool branch_taken_0x378240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x378240) {
            ctx->pc = 0x3782D0u;
            goto label_3782d0;
        }
    }
    ctx->pc = 0x378248u;
    // 0x378248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37824c: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37824Cu;
    {
        const bool branch_taken_0x37824c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x37824c) {
            ctx->pc = 0x378284u;
            goto label_378284;
        }
    }
    ctx->pc = 0x378254u;
    // 0x378254: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x378254u;
    {
        const bool branch_taken_0x378254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x378254) {
            ctx->pc = 0x378264u;
            goto label_378264;
        }
    }
    ctx->pc = 0x37825Cu;
    // 0x37825c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x37825Cu;
    {
        const bool branch_taken_0x37825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37825c) {
            ctx->pc = 0x3782D0u;
            goto label_3782d0;
        }
    }
    ctx->pc = 0x378264u;
label_378264:
    // 0x378264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378268: 0x12230019  beq         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x378268u;
    {
        const bool branch_taken_0x378268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x378268) {
            ctx->pc = 0x3782D0u;
            goto label_3782d0;
        }
    }
    ctx->pc = 0x378270u;
    // 0x378270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378274: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x378274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x378278: 0xa0230397  sb          $v1, 0x397($at)
    ctx->pc = 0x378278u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0397u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A0397u, _value); } while (0);
    // 0x37827c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x37827Cu;
    {
        const bool branch_taken_0x37827c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37827c) {
            ctx->pc = 0x3782D0u;
            goto label_3782d0;
        }
    }
    ctx->pc = 0x378284u;
label_378284:
    // 0x378284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378288: 0x16230009  bne         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x378288u;
    {
        const bool branch_taken_0x378288 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x378288) {
            ctx->pc = 0x3782B0u;
            goto label_3782b0;
        }
    }
    ctx->pc = 0x378290u;
    // 0x378290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x378290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x378294: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x378294u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x378298: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x378298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x37829c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x37829cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3782a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3782a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3782a4: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x3782a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x3782a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3782A8u;
    {
        const bool branch_taken_0x3782a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3782a8) {
            ctx->pc = 0x3782D0u;
            goto label_3782d0;
        }
    }
    ctx->pc = 0x3782B0u;
label_3782b0:
    // 0x3782b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3782b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3782b4: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x3782b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x3782b8: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3782b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x3782bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3782bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3782c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3782c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3782c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3782c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3782c8: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x3782c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x3782cc: 0x0  nop
    ctx->pc = 0x3782ccu;
    // NOP
label_3782d0:
    // 0x3782d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3782d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3782d4: 0x0  nop
    ctx->pc = 0x3782d4u;
    // NOP
label_3782d8:
    // 0x3782d8: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x3782d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3782dc: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x3782DCu;
    {
        const bool branch_taken_0x3782dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3782dc) {
            ctx->pc = 0x3781DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3781dc;
        }
    }
    ctx->pc = 0x3782E4u;
    // 0x3782e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3782e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3782e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3782e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3782ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3782ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3782f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3782F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3782F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3782F8u;
}
