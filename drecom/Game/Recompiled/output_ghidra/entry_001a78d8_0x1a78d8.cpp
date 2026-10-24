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

// Function: entry_001a78d8
// Address: 0x1a78d8 - 0x1a7b54
void entry_001a78d8_0x1a78d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a78d8_0x1a78d8");
#endif

    ctx->pc = 0x1a78d8u;

    // 0x1a78d8: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x1a78d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1a78dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1a78dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1a78e0: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a78e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a78e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a78ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a78f0: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x1a78f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a78f4: 0xdd0600b0  ld          $a2, 0xB0($t0)
    ctx->pc = 0x1a78f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x1a78f8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1a78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1a78fc: 0x22fb8  dsll        $a1, $v0, 30
    ctx->pc = 0x1a78fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 30);
    // 0x1a7900: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1a7900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a7904: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a7904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7908: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x1a7908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x1a790c: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x1a790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7910: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a7910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a7914: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x1a7914u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1a7918: 0xe52025  or          $a0, $a3, $a1
    ctx->pc = 0x1a7918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x1a791c: 0xfd0400b0  sd          $a0, 0xB0($t0)
    ctx->pc = 0x1a791cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 176), GPR_U64(ctx, 4));
    // 0x1a7920: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x1a7920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7924: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a7924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7928: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1a7928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a792c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7930: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1a7930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7934: 0x90c500b4  lbu         $a1, 0xB4($a2)
    ctx->pc = 0x1a7934u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x1a7938: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1a7938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a793c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7940: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1a7940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1a7944: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1a7944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a7948: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1a7948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a794c: 0xa0c200b4  sb          $v0, 0xB4($a2)
    ctx->pc = 0x1a794cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 180), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7950: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x1a7950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7954: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7958: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a7958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a795c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a795cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7960: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x1a7960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a7964: 0x90a600b4  lbu         $a2, 0xB4($a1)
    ctx->pc = 0x1a7964u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x1a7968: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1a7968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1a796c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a796cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7970: 0x2404ffe7  addiu       $a0, $zero, -0x19
    ctx->pc = 0x1a7970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1a7974: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x1a7974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1a7978: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a7978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a797c: 0xa0a200b4  sb          $v0, 0xB4($a1)
    ctx->pc = 0x1a797cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 180), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7980: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7984: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a7984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7988: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1a7988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a798c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a798cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a7990: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x1a7990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7994: 0xdd0400b0  ld          $a0, 0xB0($t0)
    ctx->pc = 0x1a7994u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x1a7998: 0x30033fff  andi        $v1, $zero, 0x3FFF
    ctx->pc = 0x1a7998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)16383);
    // 0x1a799c: 0x3397c  dsll32      $a3, $v1, 5
    ctx->pc = 0x1a799cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a79a0: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x1a79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x1a79a4: 0x3443001f  ori         $v1, $v0, 0x1F
    ctx->pc = 0x1a79a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x1a79a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a79a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a79ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a79acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a79b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a79b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a79b4: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x1a79b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a79b8: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x1a79b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a79bc: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x1a79bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1a79c0: 0x472025  or          $a0, $v0, $a3
    ctx->pc = 0x1a79c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1a79c4: 0xfd0400b0  sd          $a0, 0xB0($t0)
    ctx->pc = 0x1a79c4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 176), GPR_U64(ctx, 4));
    // 0x1a79c8: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a79c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a79cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a79d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a79d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a79d8: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x1a79d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a79dc: 0x90e600b6  lbu         $a2, 0xB6($a3)
    ctx->pc = 0x1a79dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 182)));
    // 0x1a79e0: 0x3005000f  andi        $a1, $zero, 0xF
    ctx->pc = 0x1a79e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)15);
    // 0x1a79e4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a79e8: 0x2404ff87  addiu       $a0, $zero, -0x79
    ctx->pc = 0x1a79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x1a79ec: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x1a79ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1a79f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a79f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a79f4: 0xa0e200b6  sb          $v0, 0xB6($a3)
    ctx->pc = 0x1a79f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 182), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a79f8: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a79fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7a00: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1a7a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7a04: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a7a08: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a7a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7a0c: 0x90a300b6  lbu         $v1, 0xB6($a1)
    ctx->pc = 0x1a7a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 182)));
    // 0x1a7a10: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1a7a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a7a14: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a7a18: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x1a7a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a7a1c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x1a7a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1a7a20: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1a7a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a7a24: 0xa0a200b6  sb          $v0, 0xB6($a1)
    ctx->pc = 0x1a7a24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 182), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7a28: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7a2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7a30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7a34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7a38: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a7a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7a3c: 0x90a400b7  lbu         $a0, 0xB7($a1)
    ctx->pc = 0x1a7a3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 183)));
    // 0x1a7a40: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x1a7a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x1a7a44: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1a7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a7a48: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a7a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a7a4c: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1a7a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7a50: 0xa0a600b7  sb          $a2, 0xB7($a1)
    ctx->pc = 0x1a7a50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 183), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a7a54: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a7a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7a58: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7a5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7a60: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a7a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7a64: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1a7a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a7a68: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1a7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a7a6c: 0x904600b7  lbu         $a2, 0xB7($v0)
    ctx->pc = 0x1a7a6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 183)));
    // 0x1a7a70: 0x30e30007  andi        $v1, $a3, 0x7
    ctx->pc = 0x1a7a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x1a7a74: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1a7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7a78: 0x2404ff1f  addiu       $a0, $zero, -0xE1
    ctx->pc = 0x1a7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1a7a7c: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x1a7a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1a7a80: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a7a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a7a84: 0xa04300b7  sb          $v1, 0xB7($v0)
    ctx->pc = 0x1a7a84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 183), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a7a88: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7a8c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7a90: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7a94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7a98: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x1a7a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a7a9c: 0x904300b3  lbu         $v1, 0xB3($v0)
    ctx->pc = 0x1a7a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 179)));
    // 0x1a7aa0: 0x316bc  dsll32      $v0, $v1, 26
    ctx->pc = 0x1a7aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1a7aa4: 0x21f3e  dsrl32      $v1, $v0, 28
    ctx->pc = 0x1a7aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a7aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7aac: 0x622004  sllv        $a0, $v0, $v1
    ctx->pc = 0x1a7aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a7ab0: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x1a7ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x1a7ab4: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x1a7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7ab8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7abc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7ac0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7ac4: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1a7ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a7ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7acc: 0xdcc300b0  ld          $v1, 0xB0($a2)
    ctx->pc = 0x1a7accu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x1a7ad0: 0x317b8  dsll        $v0, $v1, 30
    ctx->pc = 0x1a7ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 30);
    // 0x1a7ad4: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a7ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a7ad8: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x1a7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a7adc: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x1a7adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x1a7ae0: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a7ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a7ae4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A7AE4u;
    {
        const bool branch_taken_0x1a7ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ae4) {
            ctx->pc = 0x1A7B54u;
            return;
        }
    }
    ctx->pc = 0x1A7AECu;
    // 0x1a7aec: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x1a7aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7af0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7af4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1a7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7af8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1a7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7afc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1a7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7b00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7b04: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7b08: 0x24830354  addiu       $v1, $a0, 0x354
    ctx->pc = 0x1a7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 852));
    // 0x1a7b0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a7b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a7b10: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1a7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a7b14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7b18: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1a7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7b1c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1a7b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7b20: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1a7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1a7b24: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1a7b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a7b28: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7b2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7b30: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7b34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7b38: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1a7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7b3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7b40: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7b44: 0x24440360  addiu       $a0, $v0, 0x360
    ctx->pc = 0x1a7b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x1a7b48: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a7b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a7b4c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1A7B4Cu;
    {
        const bool branch_taken_0x1a7b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7b4c) {
            ctx->pc = 0x1A7D08u;
            return;
        }
    }
    ctx->pc = 0x1A7B54u;
}
