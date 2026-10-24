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

// Function: Shw_packet_set_scr
// Address: 0x1e56a0 - 0x1e5868
void Shw_packet_set_scr_0x1e56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shw_packet_set_scr_0x1e56a0");
#endif

    switch (ctx->pc) {
        case 0x1e56dcu: goto label_1e56dc;
        case 0x1e5704u: goto label_1e5704;
        default: break;
    }

    ctx->pc = 0x1e56a0u;

    // 0x1e56a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e56a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e56a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e56a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e56a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e56a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e56ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e56acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e56b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e56b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e56b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e56b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e56b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e56b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e56bc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1e56bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1e56c0: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x1e56c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x1e56c4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e56c8: 0x8c5401ec  lw          $s4, 0x1EC($v0)
    ctx->pc = 0x1e56c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 492)));
    // 0x1e56cc: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x1e56ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1e56d0: 0x8e150004  lw          $s5, 0x4($s0)
    ctx->pc = 0x1e56d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e56d4: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x1e56d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e56d8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e56d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e56dc:
    // 0x1e56dc: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1e56dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e56e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e56e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e56e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1e56e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e56e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e56e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e56ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e56ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e56f0: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E56F0u;
    {
        const bool branch_taken_0x1e56f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e56f0) {
            ctx->pc = 0x1E56DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e56dc;
        }
    }
    ctx->pc = 0x1E56F8u;
    // 0x1e56f8: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x1e56f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1e56fc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1e56fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5700: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1e5700u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e5704:
    // 0x1e5704: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1e5704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5708: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e5708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e570c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5714: 0xac4401f0  sw          $a0, 0x1F0($v0)
    ctx->pc = 0x1e5714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 496), GPR_U32(ctx, 4));
    // 0x1e5718: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e5718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e571c: 0x34430005  ori         $v1, $v0, 0x5
    ctx->pc = 0x1e571cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1e5720: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5724: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e5724u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e5728: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e572c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1e572cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1e5730: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5734: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e5734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e5738: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e5738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e573c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e5740: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e5740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e5744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5748: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e5748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e574c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5750: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e5750u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e5754: 0x3403eeee  ori         $v1, $zero, 0xEEEE
    ctx->pc = 0x1e5754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61166);
    // 0x1e5758: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e575c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e575cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e5760: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1e5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1e5764: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5768: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x1e5768u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1e576c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5770: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x1e5770u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
    // 0x1e5774: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5778: 0xfc400020  sd          $zero, 0x20($v0)
    ctx->pc = 0x1e5778u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
    // 0x1e577c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e5780: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5784: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x1e5784u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1e5788: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1e5788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1e578c: 0x34431001  ori         $v1, $v0, 0x1001
    ctx->pc = 0x1e578cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x1e5790: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5794: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x1e5794u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x1e5798: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1e5798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1e579c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e57a0: 0xfc430038  sd          $v1, 0x38($v0)
    ctx->pc = 0x1e57a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x1e57a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e57a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e57a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e57ac: 0x3c021010  lui         $v0, 0x1010
    ctx->pc = 0x1e57acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4112 << 16));
    // 0x1e57b0: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x1e57b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x1e57b4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e57b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e57b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e57bc: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x1e57bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x1e57c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e57c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e57c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e57c8: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x1e57c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x1e57cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e57d0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1e57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1e57d4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e57d8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1e57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1e57dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e57dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e57e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e57e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e57e4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e57e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e57e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e57ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e57ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e57f0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1e57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1e57f4: 0x3443444e  ori         $v1, $v0, 0x444E
    ctx->pc = 0x1e57f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17486);
    // 0x1e57f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e57fc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1e57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1e5800: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5804: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e5804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1e5808: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e580c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e5810: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e5810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e5814: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1e5814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e5818: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e5818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e581c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5820: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1e5820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e5824: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e582c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e582cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e5830: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e5830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e5834: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e5834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e5838: 0x1620ffb2  bnez        $s1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1E5838u;
    {
        const bool branch_taken_0x1e5838 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5838) {
            ctx->pc = 0x1E5704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5704;
        }
    }
    ctx->pc = 0x1E5840u;
    // 0x1e5840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5844: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e5844u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5848: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5848u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e584c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e584cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5850: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e585c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e585cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e5860: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5868u;
}
